const int tombol = D1; 
const int lampu = D2; 
bool ledState = LOW; // Menggunakan operator "="

void setup() {
  pinMode(tombol, INPUT_PULLUP);
  pinMode(lampu, OUTPUT);

  // Jika ada lebih dari satu LED, deklarasikan pin-pin tersebut
  // pinMode(led1, OUTPUT);
  // pinMode(led2, OUTPUT);
  // pinMode(led3, OUTPUT);
  
  digitalWrite(lampu, LOW);  // Mematikan lampu pada awalnya
}

void loop() {
  static bool lastButtonState = HIGH;
  bool currentButtonState = digitalRead(tombol);
 
  if (lastButtonState == HIGH && currentButtonState == LOW) {
    // Toggle LED state
    ledState = !ledState;
    digitalWrite(lampu, ledState);
    delay(200);  // Debounce delay
  }
  
  lastButtonState = currentButtonState;  // Update last button state
}