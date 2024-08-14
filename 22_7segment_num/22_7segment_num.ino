                              // a, b, c, d, e, f, g, h
const unsigned int fnd_pin[8] = { 2, 3, 4, 5, 6, 7, 8, 9 };
const unsigned char fnd_data[10] = { 0xFC, 0x60, 0xDA, 0xF2, 0x66, 
                                    0xB6, 0xBE, 0xE4, 0xFE, 0xF6 };

void FND_OUTPUT(int num);

void setup() {
  // put your setup code here, to run once:

  for(int i=0; i<8; i++) {
    pinMode(fnd_pin[i], OUTPUT);
  }


  // digitalWrite(led[0], LOW);
  // digitalWrite(led[1], LOW);
  // digitalWrite(led[2], LOW);
  // digitalWrite(led[3], LOW);
  // digitalWrite(led[4], LOW);
  // digitalWrite(led[5], HIGH);
  // digitalWrite(led[6], HIGH);
  // digitalWrite(led[7], LOW);
  
    
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(int i=0; i<10; i++) {
    FND_OUTPUT(i);
    delay(500);
  }

  // // 1
  // for(int i=0; i<8; i++){
  //   digitalWrite(fnd_pin[i], fnd_data[1] & (0x01<<i) );
  // }
  // delay(300);

  // // 2
  // for(int i=0; i<8; i++){
  //   digitalWrite(fnd_pin[i], fnd_data[2] & (0x01<<i) );
  // }
  // delay(300);

 
}


void FND_OUTPUT(int num) {
    // 1
  for(int i=0; i<8; i++){
    digitalWrite(fnd_pin[i], (~fnd_data[num]) & (0x80>>i) );
  }
  delay(300);

}
