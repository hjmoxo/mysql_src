#include "PinChangeInterrupt.h"

int led_flag = 0; // 0이면 off 1이면 on
const int ledPin = 4;
const int buttonPin = 2;

const int ledPin2 = 5;
const int buttonPin2 = 3;
int led_flag2 = 0;

unsigned long t1_prev = 0;
const unsigned long t1_delay = 300;
unsigned long t2_prev = 0;
const unsigned long t2_delay = 500;

// 사용자 함수 선언(인터럽트)
// ISR(인터럽트 서비스 루틴)
void buttonPressed(void) {
   // 스위치 동작에 따른 상태값 변경
  if( led_flag == 0 ){
      led_flag = 1;
    }
    else {
      led_flag = 0;
    }
}

void buttonPressed2(void) {
  if( led_flag2 == 0 ){
      led_flag2 = 1;
    }
    else {
      led_flag2 = 0;
    }
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin2, INPUT);

  attachPCINT(digitalPinToPCINT(buttonPin), buttonPressed, RISING);
  attachPCINT(digitalPinToPCINT(buttonPin2), buttonPressed2, RISING);

  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

  unsigned long t1_now = millis();
  unsigned long t2_now = millis();

  if(t1_now - t1_prev >= t1_delay) {
    t1_prev = t1_now;

    if(led_flag == 1) { 
    digitalWrite(ledPin, digitalRead(ledPin)?LOW:HIGH);
    } 
  }


  if(t2_now - t2_prev >= t2_delay) {
    t2_prev = t2_now;

    if(led_flag2 == 1) { 
    digitalWrite(ledPin2, digitalRead(ledPin2)?LOW:HIGH);
    } 
  }    

}

