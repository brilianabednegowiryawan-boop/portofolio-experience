const int pirPin = D1;       // Pin untuk sensor PIR
const int relayPin = D2;     // Pin untuk lampu
const int buzzerPin = D3;    // Pin untuk buzzer

void setup() {
  Serial.begin(115200);
  pinMode(pirPin, INPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Matikan lampu di awal
  digitalWrite(buzzerPin, LOW); // Matikan buzzer di awal
}

void loop() {
  int pirState = digitalRead(pirPin); // Membaca status sensor PIR
  if (pirState == HIGH) {
    Serial.println("ADA HANTU!!");
    digitalWrite(relayPin, HIGH);  // Nyalakan lampu
    digitalWrite(buzzerPin, HIGH); // Nyalakan buzzer
    delay(3000);                   // Lampu dan buzzer menyala selama 3 detik
  } else {
    Serial.println("GAK ONOK SOPO-SOPO");
    digitalWrite(relayPin, LOW);   // Matikan lampu
    digitalWrite(buzzerPin, LOW);  // Matikan buzzer
  }
  delay(500); // Delay sebelum membaca kembali
}