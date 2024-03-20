#include <Adafruit_CircuitPlayground.h>

int value;

void setup() {
  Serial.begin(2000000);
  CircuitPlayground.begin();
}

void loop() {
  // Read the light sensor signal.
 CircuitPlayground.setPixelColor(0,255,100,0);
 CircuitPlayground.setPixelColor(1,255,100,0);
 CircuitPlayground.setPixelColor(2,255,100,0);
 CircuitPlayground.setPixelColor(3,255,100,0);
 CircuitPlayground.setPixelColor(4,255,100,0);
 CircuitPlayground.setPixelColor(5,255,100,0);
 CircuitPlayground.setPixelColor(6,255,100,0);
 CircuitPlayground.setPixelColor(7,255,100,0);
 CircuitPlayground.setPixelColor(8,255,100,0);
 CircuitPlayground.setPixelColor(9,255,100,0);
  value = CircuitPlayground.lightSensor();
  
  Serial.print("Light Sensor:");
  
  Serial.print(value);
 // Print out the value of the light sensor to the screen 
  
  delay(20);
}
