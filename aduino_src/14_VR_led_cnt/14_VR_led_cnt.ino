#define A_REF       5.0
#define RESOLUTION  1024
#define UNIT_ADC    A_REF/RESOLUTION
#define VR          10000.0

char str[100];
const int analogPin = A0;
const int ledPin = 3;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue = analogRead(analogPin);  //0~1023
  
  int val = map(analogValue, 100, 360, 0, 255);
  
  analogWrite(ledPin, val);

  Serial.println(analogValue);

}
