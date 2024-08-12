/*
 하드웨어 설계 
  - SW는 Active LOW
  - LED는 Active LOW 
*/

const int ledPin = 3;
const int buttonPin = 2;
int led_flag = 0; // 0이면 off 1이면 on

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

  digitalWrite(ledPin, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

  int buttonInput = digitalRead(buttonPin);

  if( buttonInput == LOW) {
    
    if( led_flag == 0 ){
      digitalWrite(ledPin, LOW);
      led_flag = 1;
    }
    else{
      digitalWrite(ledPin, HIGH);
      led_flag = 0;
    }

    delay(300);

  }

   
}
