#define RED_PIN D1
#define YELLOW_PIN D2
#define GREEN_PIN D3

void setup() {
  // Mengatur pin sebagai output
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void loop() {
  // Nyalakan lampu merah selama 5 detik
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  delay(5000);  // Tunggu 5 detik

  // Nyalakan lampu kuning selama 2 detik (tetap menyala)
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  delay(2000);  // Tunggu 2 detik

  // Lampu kuning berkedip selama 2 detik sebelum lampu hijau
  for (int i = 0; i < 5; i++) {  // Berkedip 5 kali
    digitalWrite(YELLOW_PIN, HIGH);
    delay(500);  // Nyala selama 200 ms
    digitalWrite(YELLOW_PIN, LOW);
    delay(500);  // Mati selama 200 ms
  }

  // Nyalakan lampu hijau selama 5 detik
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  delay(5000);  // Tunggu 5 detik

  // Nyalakan lampu kuning selama 2 detik (tetap menyala)
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  delay(1000);  // Tunggu 2 detik

 // Lampu kuning berkedip selama 2 detik sebelum lampu hijau
  for (int i = 0; i < 5; i++) {  // Berkedip 5 kali
    digitalWrite(YELLOW_PIN, HIGH);
    delay(500);  // Nyala selama 200 ms
    digitalWrite(YELLOW_PIN, LOW);
    delay(500);  // Mati selama 200 ms
   }

    // Nyalakan lampu merah selama 5 detik
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  delay(5000);  // Tunggu 5 detik

}
