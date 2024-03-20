/***
   Author: J Newland
   2018/07/27

   Use the Adafruit Circuit Playground Express
   to detect and display the pulse using an
   on-board LED and the on-board light sensor.
 ***/
#include "Adafruit_CircuitPlayground.h"

// Initialize variables.
int lightSensor = 0;
int ppg = 0;
int value;
int Absorb;

void setup() {
  // How fast you read can make a difference.
  // Go as fast as your hardware can handle.
  Serial.begin(9600);
  Serial.println("Circuit Playground Express PPG");

  // Start the Circuit Playground Express
  CircuitPlayground.begin();

  //1. Choose the NeoPixel closest to the light sensor and turn it on
  // You'll need to experiment with color
  CircuitPlayground.setPixelColor(1, 255,0,0);

  //2. Set the Brightness to Maximum
  CircuitPlayground.setBrightness(255);

  // Sets the Neopixels
  CircuitPlayground.strip.show();
}

void loop() {
  // 3. Read the light sensor signal.
  value = CircuitPlayground.lightSensor();
  Serial.print("Light Sensor:");


  // 4. Since this is reflective photoplethysmography,
  // we need to subtract the signal to see the true waveform.
  //<...> // 1024 is ths max value possible.
  Absorb = 1024 - value;
  Serial.println(Absorb);

  // 5. Print waveform to the serial console and plotter


  // Delay to allow the sensor to reset.
  delay(20);
}
