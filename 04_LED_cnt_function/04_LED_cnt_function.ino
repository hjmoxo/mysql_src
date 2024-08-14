// 사용자 함수 선언
int myPinMode(int pin_num, int mode);


// 전역 변수 선언
unsigned char led_data[4] = {0x04, 0x08, 0x10, 0x20};
unsigned char ary_size = sizeof(led_data) / sizeof(led_data[0]);

void setup() {
  // ARDUINO_PIN_2(PD2)
  Serial.begin(115200);

  int state = myPinMode(3, OUTPUT);
  if( state == -1 ) return 0;

  // DDRD |= 0x3C; 

}

void loop() {
 
  // 1. led 전체 점멸
  PORTD |= 0x01 << PORT3;  
  delay(300);
  PORTD &= ~(0x01 << PORT 3); 
  delay(300);

  // 2. led쉬프트 (배열)
  // for(int i=0; i<ary_size; i++) {   
  //   PORTD = led_data[i];S
  //   delay(300);
  // }

  // 3. led쉬프트 (연산자 이용)
  // for(int i=0; i<4; i++) {
  //   PORTD = 0x04 << i;
  //   delay(300);
  // }
  

}

int myPinMode(int pin_num, int mode) {

  int pin_arry[14] = { 0,1,2,3,4,5,6,7,0,1,2,3,4,5 };
  int port;
  int pin;


  if( pin_num<0 || pin_num>13) { 
    Serial.println("0~13사의 숫자만 입력해주세요."); 
    return -1; 
  }
  else {
    pin = pin_arry[pin_num];
  }
  

  if( pin_num > 7 ) port = DDRB; 
  else port = DDRD;

  if(mode == OUTPUT) { 
    port |= 0x01 << pin;
  }
  else {
    port |= ~(0x01 << pin);
  }

}

