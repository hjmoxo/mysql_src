#define A_REF       5.0
#define RESOLUTION  1024
#define UNIT_ADC    A_REF/RESOLUTION

char str[100];
const int analogPin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  double analogValue = analogRead(analogPin);

  sprintf(str, "%d, %d", analogValue, analogValue * UNIT_ADC);
  Serial.println(str);
  // Serial.print(analogValue, 0);
  // Serial.print(", ");
  // Serial.println(analogValue * UNIT_ADC, 6);

}
