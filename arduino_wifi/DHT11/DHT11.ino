// Modified by John 2015 11 03
// MIT license

#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
}
void loop() {
  delay(2000);
  int h = dht.readHumidity();     //습도 읽기
  int t = dht.readTemperature();  //온도 읽기
  Serial.print("humi");  //humi56
  Serial.println(h);
  Serial.print("temp");  //temp24 
  Serial.println(t);
}
