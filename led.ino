const int ledPins[] = {2, 3, 4};  // Pin LED yang digunakan
const int numLeds = 3; // Jumlah LED
const int blinkDelay = 500; // Delay untuk efek blink cepat

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  blink();   // Efek Blink
  delay(1000); // Tunggu 1 detik

  running(); // Efek Running
  delay(1000); // Tunggu 1 detik

  reverse(); // Efek Reverse
  delay(1000); // Tunggu 1 detik
}

void blink() {
  for (int j = 0; j < 2; j++) { // Kedip dua kali
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
    delay(blinkDelay);
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], LOW);
    }
    delay(blinkDelay);
  }
}

void running() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(200);
    digitalWrite(ledPins[i], LOW);
  }
}

void reverse() {
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(200);
    digitalWrite(ledPins[i], LOW);
  }
}
