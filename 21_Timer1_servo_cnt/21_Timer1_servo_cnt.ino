#include <TimerOne.h>

const int servo = 10;
const int sw = 2;

void setup() {
  // put your setup code here, to run once:

  Timer1.initialize(20000);
  Timer1.pwm(servo, 0);  //0은 high의 개수이며 1023까지 쓸 수 잇음 

  pinMode(sw, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int button = digitalRead(sw);

  int ch = 0;

  if( button == HIGH && ch==0 ) {
    // 0도
    Timer1.setPwmDuty(servo, 27);
    delay(500);
    ch = 1;
  }
  else if ( button == HIGH && ch==1) {
      // 90도 
    Timer1.setPwmDuty(servo, 77);
    delay(500);
    ch = 2;
  }
  else if ( button == HIGH && ch==2) {
    // 180도 
     Timer1.setPwmDuty(servo, 127);
    delay(500);
    ch = 0;
  }

  
}
