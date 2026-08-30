const int led1 = D1; // LED pertama di D1
const int led2 = D2; // LED kedua di D2
const int led3 = D3; // LED ketiga di D3
const int buttonPin = D6; // Tombol di D6

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // Tombol menggunakan pull-up internal
  digitalWrite(led1, LOW); // Matikan semua lampu di awal
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}

void loop() {

  // Jika tombol ditekan
  if (currentButtonState == LOW) {
    // Nyalakan lampu
    digitalWrite(led1, HIGH);
    (led2, HIGH);
    digitalWrite(led3, HIGH);
  } else {
    // Matikan lampu
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
}