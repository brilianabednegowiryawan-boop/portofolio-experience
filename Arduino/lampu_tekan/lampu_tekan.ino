void setup() {
  pinMode(D1,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D5,INPUT);
}

void loop() {
  digitalWrite(D1,HIGH);
  delay(500);
  digitalWrite(D1,LOW);
  delay(500);
  digitalWrite(D1,HIGH);
  delay(500);
  digitalWrite(D1,LOW);
  delay(500);
  digitalWrite(D1,HIGH);
  delay(500);
  digitalWrite(D1,LOW);
  delay(500);
  digitalWrite(D1,HIGH);
  delay(500);
  digitalWrite(D1,LOW);
  delay(100);

int tombol=digitalRead(D5);
  if(tombol==1){
    digitalWrite(D1,LOW);
    delay(100);
    digitalWrite(D3,HIGH);
    delay(10000);
    digitalWrite(D3,LOW);
    delay(500);
  }

}