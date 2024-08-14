#include <Servo.h>

const int SERVO = 10;
Servo servo;
int degree;

void setup() {
  // put your setup code here, to run once:

  servo.attach(SERVO, 544, 2500);
  servo.write(degree);

  delay(1000);
  

  // for(int angle=0; angle<=180; angle++) {
  //   servo.write(angle);
  //   delay(30);
  // }

  // servo.detach();
}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available()) {
    String rx_data = Serial.readString();
    Serial.print(rx_data);
    rx_data.trim(); // \n, \r 제거 

    degree = rx_data.toInt();

    Serial.println(rx_data);

    if(degree>=0 && degree<=180) {
      servo.write(degree);
    }
  }
  
}
