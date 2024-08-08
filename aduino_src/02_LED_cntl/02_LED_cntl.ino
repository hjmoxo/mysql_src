const int led[8] = { 2, 3, 4, 5, 6, 7, 8, 9 };
// const int led_01 = 3;
// const int led_02 = 4;
// const int led_03 = 5;
// const int led_04 = 6;
// const int led_05 = 7;
// const int led_06 = 8;
// const int led_07 = 9;

void setup() {
  // put your setup code here, to run once:

  for(int i=0; i<8; i++) {
    pinMode(led[i], OUTPUT);
  }

    // pinMode(led_00, OUTPUT);
    // pinMode(led_01, OUTPUT);
    // pinMode(led_02, OUTPUT);
    // pinMode(led_03, OUTPUT);
    // pinMode(led_04, OUTPUT);
    // pinMode(led_05, OUTPUT);
    // pinMode(led_06, OUTPUT);
    // pinMode(led_07, OUTPUT);
  
  // for(int i=0; i<8; i++) {
  //   digitalWrite(led[i], HIGH);
  //   delay(100);
  //   digitalWrite(led[i], LOW);
  //   delay(100);
  // }

  // digitalWrite(led_00, HIGH);
  // digitalWrite(led_01, HIGH);
  // digitalWrite(led_02, HIGH);
  // digitalWrite(led_03, HIGH);
  // digitalWrite(led_04, HIGH);
  // digitalWrite(led_05, HIGH);
  // digitalWrite(led_06, HIGH);
  // digitalWrite(led_07, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

    digitalWrite(led[i], HIGH);
    delay(100);
    digitalWrite(led[i], LOW); 

}