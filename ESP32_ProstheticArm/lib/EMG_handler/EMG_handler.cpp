#include <Arduino.h>
#include <Servo.h>
#include "EMG_handler.h"

// === CONFIGURATION ===
const int numServos = 5;
const int emgPin = A0;
const int threshold = 400;

const int servoPins[numServos] = {5, 6, 9, 10, 11}; // Adjust pins to your setup
Servo servos[numServos];

void EMG_setup() {
    for (int i = 0; i < numServos; i++) {
        servos[i].attach(servoPins[i]);
        servos[i].write(0);  // Start at rest position
    }
}

void EMG_loop() {
    int emgValue = analogRead(emgPin);
    Serial.println(emgValue);

    int angle = map(emgValue, threshold, 1023, 0, 90); // Maps EMG to servo angle
    angle = constrain(angle, 0, 90);


    for (int i = 0; i < numServos; i++) {
        servos[i].write(angle);
    }
}

