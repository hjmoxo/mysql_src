const int ledPin = 3;
const int buttonPin = 2;
int led_flag = 0; // 0이면 off 1이면 on
int cur_btn_val = 1, pre_btn_vla = 1;  // 평소에 엑티브 하이니깐 1

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

  if( (cur_btn_val==LOW) && (pre_btn_vla==HIGH) ) {
    
    if( led_flag == 0 ){
      digitalWrite(ledPin, HIGH);
      led_flag = 1;
    }
    else{
      digitalWrite(ledPin, LOW);
      led_flag = 0;
    }

    //delay(300);

  }

  pre_btn_vla = cur_btn_val; // 이전값 갱신 
   
}
