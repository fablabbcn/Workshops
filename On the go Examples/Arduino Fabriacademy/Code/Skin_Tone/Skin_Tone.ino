/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT);
  randomSeed(analogRead(0));
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int skin = analogRead(A0);
  Serial.println(skin);
  if (skin < 1000) {
    long randNumber = random(31, 50);
    tone(8, randNumber);
    delayMicroseconds(1);
  } else {
    long randNumber = random(100, 20000);
    tone(8, randNumber);
    delayMicroseconds(1);
  }

}
