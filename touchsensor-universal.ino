void setup() {
  Serial.begin(115200);
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
}

void loop() {
  digitalWrite(7, HIGH);

  int count = 0;
  while (true) {
    int val = digitalRead(8);
    if (val == 1) break;
    if (count >= 256) break;  // 256超えたらbreak
    count++;
  }

  digitalWrite(7, LOW);

  Serial.print("min:45,max:80,count:");
  Serial.println(count);

  delay(5);
}
