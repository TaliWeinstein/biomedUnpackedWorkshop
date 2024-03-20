#include "Adafruit_CircuitPlayground.h"
int brightness = 255;
int Red = 255;
int Green =0;
int Blue = 0;

void setup() {
  Serial.begin(2000000);

  // Start the Circuit Playground Express
  CircuitPlayground.begin();
    
  //Set which NeoPixels you want to use and what colour you want them to be 
   
  // Set the NeoPixels Brightness 
  CircuitPlayground.setBrightness(125);
}

void loop() {
  // Make changes to how they glow during the loop 
  // only relevent for part 4: Change the NeoPixel colour once the program has started
  CircuitPlayground.setPixelColor(0,255,0,0);
 CircuitPlayground.setPixelColor(1,255,100,0);
 CircuitPlayground.setPixelColor(2,255,255,0);
 CircuitPlayground.setPixelColor(3,0,255,0);
 CircuitPlayground.setPixelColor(4,0,0,255);
 CircuitPlayground.setPixelColor(5,255,0,255);
 CircuitPlayground.setPixelColor(6,0,0,0);
 CircuitPlayground.setPixelColor(7,0,0,0);
 CircuitPlayground.setPixelColor(8,0,0,0);
 CircuitPlayground.setPixelColor(9,0,0,0);



  delay(1000);
  CircuitPlayground.clearPixels();
  delay(1000);
 CircuitPlayground.setPixelColor(0,255,0,0);
 CircuitPlayground.setPixelColor(1,255,100,0);
 CircuitPlayground.setPixelColor(2,255,255,0);
 CircuitPlayground.setPixelColor(3,0,255,0);
 CircuitPlayground.setPixelColor(4,0,0,255);
 CircuitPlayground.setPixelColor(5,255,0,255);
 CircuitPlayground.setPixelColor(6,0,0,0);
 CircuitPlayground.setPixelColor(7,0,0,0);
 CircuitPlayground.setPixelColor(8,0,0,0);
 CircuitPlayground.setPixelColor(9,0,0,0);

  CircuitPlayground.strip.show();
  delay(1000);
  
}
