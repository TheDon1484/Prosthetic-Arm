#include <Arduino.h>
#include "EMG_handler.h"
#include "EEG_handler.h"  // optional, if EEG gating is used

void setup() {
  Serial.begin(9600);
  EMG_setup();
  // EEG_setup(); ← Uncomment if needed
}

void loop() {
  EMG_loop();
  delay(50);
}
