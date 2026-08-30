#define TRIG_PIN D5  // Pin TRIG sensor HC-SR04
#define ECHO_PIN D6  // Pin ECHO sensor HC-SR04
#define RELAY_PIN D7 // Pin modul relay

void setup() {
  Serial.begin(115200);
  
  // Konfigurasi pin
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  
  // Pastikan relay dalam kondisi mati saat start
  digitalWrite(RELAY_PIN, LOW);
}

void loop() {
  // Kirim pulsa trigger
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // Baca durasi pulsa dari ECHO
  long duration = pulseIn(ECHO_PIN, HIGH);
  
  // Hitung jarak dalam cm
  float distance = duration * 0.034 / 2;
  
  // Debug output
  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Kontrol relay berdasarkan jarak
  if (distance <= 5.0) {
    digitalWrite(RELAY_PIN, HIGH); // Aktifkan relay
    Serial.println("Relay ON");
  } else {
    digitalWrite(RELAY_PIN, LOW); // Matikan relay
    Serial.println("Relay OFF");
  }
  
  delay(100); // Tunggu sebentar sebelum pembacaan berikutnya
}