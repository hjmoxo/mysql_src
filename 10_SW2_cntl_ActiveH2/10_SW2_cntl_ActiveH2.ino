const int ledPin = 3;
const int buttonPin = 2;
int led_flag = 0; // 0이면 off 1이면 on
int cur_btn_val = 0, pre_btn_vla = 0;

const int ledPin5 = 5;
const int buttonPin4 = 4;
int cur_btn_val2 = 0, pre_btn_vla2 = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

  pinMode(ledPin5, OUTPUT);
  pinMode(buttonPin4, INPUT);

  digitalWrite(ledPin, LOW);

  digitalWrite(ledPin5, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

  cur_btn_val = digitalRead(buttonPin); // 현재값 저장 

  cur_btn_val2 = digitalRead(buttonPin4); // 현재값 저장 

  if( (cur_btn_val==LOW) && (pre_btn_vla==HIGH) ) {
    
    if( led_flag == 0 ){
      digitalWrite(ledPin, HIGH);
      led_flag = 1;
    }
    else{
      digitalWrite(ledPin, LOW);
      led_flag = 0;
    }

  }

  if( (cur_btn_val2==LOW) && (pre_btn_vla2==HIGH) ) {
    
    if( led_flag == 0 ){
      digitalWrite(ledPin5, HIGH);
      led_flag = 1;
    }
    else{
      digitalWrite(ledPin5, LOW);
      led_flag = 0;
    }

  }

  pre_btn_vla = cur_btn_val; // 이전값 갱신 

  pre_btn_vla2 = cur_btn_val2; // 이전값 갱신 
   
}
