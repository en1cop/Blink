#include <Arduino.h>

// Clignotement d'une LED sur le GPIO 25 à une fréquence de 3 Hz.
// f = 3 Hz  ->  période T = 1/3 s ≈ 333 ms
// Une période = LED allumée + LED éteinte, donc chaque demi-période = T/2.
const uint8_t LED_PIN = 25;
const uint32_t HALF_PERIOD_MS = 1000 / (3 * 2);  // ≈ 166 ms

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(HALF_PERIOD_MS);
  digitalWrite(LED_PIN, LOW);
  delay(HALF_PERIOD_MS);
}
