#include <TimerOne.h>

const int led = 10;

void setup() {
  // put your setup code here, to run once:

  Timer1.initialize();
  Timer1.pwm(led, 0);  //0은 high의 개수이며 1023까지 쓸 수 잇음 

  Timer1.setPeriod(1000000); //주기 셋팅
  Timer1.setPwmDuty(led, 511); //상하비(듀티)
}

void loop() {
  // put your main code here, to run repeatedly:

}
