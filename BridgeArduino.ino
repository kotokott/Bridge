void setup() {
  Serial.begin(9600);
}

void loop() {
  Output();
}

void Output() {
  Serial.println("12070"); //отправка валидного uid
  Input();
  delay(1000);
  Serial.println("161879"); // отправка невалидного uid
  Input();
  delay(1000);
}

void Input() {
  if (Serial.available() > 0) {  //если сериал порт доступен
  String data = Serial.readStringUntil('\n'); //принятие данных до новой строки
  if (data == "allow") {
  //если получено разрешение
  }
  if (data == "forbid") {
  //если получен отказ
  }
  }
}
