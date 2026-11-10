int ir=3;
void setup() {
  pinMode(ir,INPUT);
  Serial.begin(9600);

}

void loop() {
  int val=digitalRead(ir);
  Serial.println(val);
  delay(1000);
}
