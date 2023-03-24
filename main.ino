#include "LoRaSender.h"
#include "PM2.5.h"
#include <M5Stack.h>


void setup() {
  M5.begin();
  M5.Power.begin();
  initLora();
  initPM();
}

void loop() {
  sendData(readData());
}
