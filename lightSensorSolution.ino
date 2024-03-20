#include <Adafruit_CircuitPlayground.h>

int value;

void setup() {
  Serial.begin(2000000);
  CircuitPlayground.begin();
}

void loop() {
  lightSensor = CircuitPlayground.lightSensor();
  
  Serial.print("Light Sensor: ");
  Serial.println( lightSensor);
  
  delay(20);
}
