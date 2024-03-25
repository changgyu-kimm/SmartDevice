const int buttonPin = 33;// 버튼 핀의 번호
const int ledPin = 4;// LED 핀 번호
int buttonState = 0; // 버튼 상태를 읽기 위한 변수

void setup() { 
  // LED 핀을 출력으로 초기화
  pinMode (ledPin, OUTPUT); 
  // 푸시버튼 핀을 입력으로 초기화
  pinMode (buttonPin, INPUT);
}

void loop(){
  buttonState = digitalRead(buttonPin);

  if(buttonState == LOW){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
}
