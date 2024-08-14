const int piezo = 10;
const int melody[8] = { 262, 294, 330, 349, 393, 440, 494, 523 }

void setup() {
  // put your setup code here, to run once:

  for(int note=0; note<=7; note++) {
    tone(piezo, melody[note]);
    delay(500);
  }

  noTone(piezo);
}

void loop() {
  // put your main code here, to run repeatedly:

  // digitalWrite(piezo, HIGH);
  // delayMicroseconds(1900);
  // digitalWrite(piezo, LOW);
  // delayMicroseconds(1900);

}
