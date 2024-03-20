
#include "Adafruit_CircuitPlayground.h"
int brightness = 255;

void setup() {
  Serial.begin(2000000);
  CircuitPlayground.setPixelColor(0, 255,   0,   0);
  CircuitPlayground.setPixelColor(1, 128, 128,   0);
  CircuitPlayground.setPixelColor(2,   0, 255,   0);
  CircuitPlayground.setPixelColor(3,   0, 128, 128);
  CircuitPlayground.setPixelColor(4,   0,   0, 255);
  
  CircuitPlayground.setPixelColor(5, 255,   0,   0);
  CircuitPlayground.setPixelColor(6, 128, 128,   0);
  CircuitPlayground.setPixelColor(7, 0,   255,   0);
  CircuitPlayground.setPixelColor(8, 0,   128, 128);
  CircuitPlayground.setPixelColor(9, 0,   0,   255);
}

void loop() {
  if(brightness <= 255 && brightness > 0)
    brightness--;
  else
    brightness++;
  
  CircuitPlayground.setBrightness(brightness);
  CircuitPlayground.strip.show();
  delay(20);
}
