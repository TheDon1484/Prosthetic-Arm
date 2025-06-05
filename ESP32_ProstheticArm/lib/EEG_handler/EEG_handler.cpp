#include <Arduino.h>
#include "EEG_handler.h"

static bool attentionState = false;
static unsigned long lastToggle = 0;

void EEG_setup() {}

bool eegAttentionActive() {
    if (millis() - lastToggle > 5000) {
        attentionState = !attentionState;
        lastToggle = millis();
    }
    return attentionState;
}
