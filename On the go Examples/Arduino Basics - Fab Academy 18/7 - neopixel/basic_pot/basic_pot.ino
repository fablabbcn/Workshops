// NeoPixel Ring simple sketch (c) 2013 Shae Erisson - released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library
#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

const byte neopixelPin    = 6;
const byte numberOfPixels = 11;

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(numberOfPixels, neopixelPin, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  
  Serial.println(sensorValue);
  
  int light = map(sensorValue, 0, 1023, 0, 255);
  
  pixels.setPixelColor(0, pixels.Color(light, 0, 0));
  
  pixels.show();
}
