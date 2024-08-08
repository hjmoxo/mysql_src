unsigned char led_data[4] = {0x04, 0x08, 0x10, 0x20};
unsigned char ary_size = sizeof(led_data) / sizeof(led_data[0]);

void setup() {
  // put your setup code here, to run once:

  // ARDUINO_PIN_2(PD2)
  DDRD |= 0x3C; 

}

void loop() {
  // put your main code here, to run repeatedly:

  // 1. led 전체 점멸
  // PORTD |= 0x3C;  
  // delay(300);
  // PORTD &= ~0x3C; 
  // delay(300);

  // 2. led쉬프트 (배열)
  // for(int i=0; i<ary_size; i++) {   
  //   PORTD = led_data[i];
  //   delay(300);
  // }

  // 3. led쉬프트 (연산자 이용)
  for(int i=0; i<4; i++) {
    PORTD = 0x04 << i;
    delay(300);
  }

}

