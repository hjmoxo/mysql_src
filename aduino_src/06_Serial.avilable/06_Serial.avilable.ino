const int LED = 10;
char userInput;
char str[10];
int cnt;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  pinMode(LED, OUTPUT);

}
 
void loop() {
  // put your main code here, to run repeatedly:

  //1. C언어 스타일 코딩
    // 문자열 저장하는 부분 (read는 문자 1개만 읽어오니까)
    // while(1) {
  
    //   if(Serial.available()) {         
          
    //     userInput = Serial.read();

    //     if(userInput == '\n') {
    //       str[cnt] == '\0';
    //       cnt = 0;
    //       break;
    //     }
    //     else {
    //       str[cnt] = userInput;
    //       cnt++;
    //     }
    //   }
    // }
  
    // if( (strcmp(str, "on")) == 0) digitalWrite(LED, HIGH);
    // else if( (strcmp(str, "off")) == 0 ) digitalWrite(LED, LOW);

    //2. C++언어 스타일 코딩(Serial.readString함수 이용)
    if( Serial.available() ) {
      String rx_data = Serial.readString();

      rx_data.trim(); // \n, \r 제거

      if(rx_data == "on") digitalWrite(LED, HIGH);
      else if(rx_data == "off") digitalWrite(LED, LOW);
    }


}

