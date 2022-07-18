void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) ==  HIGH) {
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW); 
  }
}
