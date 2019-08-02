#include "basicControl.h"
#include <Arduino.h>




void initPins() {
  pinMode(FOCUS_PIN, OUTPUT);
  pinMode(SHUTTER_PIN, OUTPUT);
}


void pullFocus() {
  digitalWrite(FOCUS_PIN, LOW);
}

void releaseFocus() {
  digitalWrite(FOCUS_PIN, HIGH);
}


void shutter() {
  pullFocus();
  delay(10);
  digitalWrite(SHUTTER_PIN, LOW);
  delay(10);
  digitalWrite(SHUTTER_PIN, HIGH);
  releaseFocus();
}