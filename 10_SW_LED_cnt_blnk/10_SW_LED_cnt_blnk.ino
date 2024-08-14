int led_flag = 0; // 0이면 off 1이면 on
const int ledPin = 5;
const int buttonPin = 4;
int cur_btn_val = 0, pre_btn_vla = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

  digitalWrite(ledPin, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

  cur_btn_val = digitalRead(buttonPin); // 현재값 저장 

  // 스위치 동작에 따른 상태값 변경
  if( (cur_btn_val==LOW) && (pre_btn_vla==HIGH) ) {

    if( led_flag == 0 ){
      led_flag = 1;
    }
    else {
      led_flag = 0;
    }

  }

  if(led_flag == 1) {
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  }    

  pre_btn_vla = cur_btn_val; // 이전값 갱신 

}

