int LED_BUILTIN = 2; // LED_BUILTIN 변수 선언, 값 할당

void setup() {
  
  pinMode(LED_BUILTIN, OUTPUT); // pinMode() 함수사용
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // digitalWrite() 함수 사용 으로 지정된에 신호 전송 , HIGHT 는 LED를 킨다.
  delay(1000); // 프로그램을 1000밀리초(1초) 지연                     
  digitalWrite(LED_BUILTIN, LOW);   /// digitalWrite() 함수 사용 으로 지정된에 신호 전송 , LOW 는 LED를 끈다.
  delay(1000);                      
}