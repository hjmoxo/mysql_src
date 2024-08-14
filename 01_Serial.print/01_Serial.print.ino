void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  Serial.println(78, DEC);  // 10진수
  Serial.println(78, HEX);  // 16진수
  Serial.println(78, BIN);  // 2진수

  Serial.println(1.12345, 0); // 소수점 이하 0개까지 출력 이후 2, 4개까지 출력
  Serial.println(1.12345, 2);
  Serial.println(1.12345, 4);

}

void loop() {
  // put your main code here, to run repeatedly:
}