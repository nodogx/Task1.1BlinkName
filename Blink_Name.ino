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

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

const int dotTime = 300;          // Duration of a dot in milliseconds
const int dashTime = 900;         // Duration of a dash in milliseconds
const int elementSpace = 300;     // Space between elements of the same letter
const int letterSpace = 900;      // Space between letters
const int wordSpace = 2100;       // Space between repeats of the name

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
   // Blink 'N' in Morse code (-.)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(elementSpace);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(letterSpace);
  
  // Blink 'o' in Morse code (---)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(elementSpace);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(elementSpace);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(letterSpace);
  
  // Blink 'd' in Morse code (-..)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(elementSpace);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(elementSpace);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(letterSpace);
  
  // Blink 'o' in Morse code (---) again
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(elementSpace);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(elementSpace);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(letterSpace);
  
  // Blink 'g' in Morse code (--.)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(elementSpace);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(elementSpace);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(letterSpace);
  
  // Blink 'x' in Morse code (-..-)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(elementSpace);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(elementSpace);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(elementSpace);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(wordSpace);  // wait before repeating the name
}
