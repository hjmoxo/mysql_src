#define A_REF       5.0
#define RESOLUTION  1024
#define UNIT_ADC    A_REF/RESOLUTION
#define VR          10000.0

char str[100];
const int analogPin = A0;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  float analogValue = analogRead(analogPin);
  float volt = analogValue * UNIT_ADC;
  float rag = (VR * volt) / A_REF;

  // sprintf(str, "%d, %d", analogValue, analogValue * UNIT_ADC);
  // Serial.println(str);

  Serial.print(analogValue, 0);
  Serial.println(", ");
  Serial.print(volt, 2);
  Serial.println(" V, ");
  Serial.print(rag);
  Serial.println(" ohm");

  // Serial.println(analogValue * UNIT_ADC, 6);
  delay(300);

}
