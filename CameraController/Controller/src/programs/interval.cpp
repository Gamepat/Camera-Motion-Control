#include "interval.h"

#include <Arduino.h>
#include "hardwareControl/basicControl.h"


//* gets called with the interval in seconds and the amount of passes and triggers the camera accordingly
void intervalShutter(float interval, int passes) {
  
  for(int i = 0; i < passes; i++) {

    shutter();
    delay(interval * 1000);
  }
}