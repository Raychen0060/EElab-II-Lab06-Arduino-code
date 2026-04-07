void setup() {
  Serial.begin(9600);
}

void loop() {
  int raw = analogRead(A0);
  float temperature = (raw * 5.0 / 1023.0) * 100.0;

  Serial.print("temp = ");
  Serial.print(temperature, 2); // 顯示到小數點後兩位
  Serial.println(" degree Celsius");

  // 3. 刷新率 0.5Hz = 每 2 秒執行一次
  delay(2000);
}
