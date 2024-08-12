void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  for (int i = 0; i < 255; i += 10) {
    analogWrite(11, i);
    delay(100);
  }
  digitalWrite(13, 0);
  analogWrite(11, 0);


}
