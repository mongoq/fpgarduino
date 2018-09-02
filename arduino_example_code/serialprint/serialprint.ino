/*
  Prints to the serial monitor.

 This example code is in the public domain.
 */

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
}

// the loop routine runs over and over again forever:
void loop() {
  static int sensorValue = 0;
  Serial.println(sensorValue++);
  delay(100);        // delay in between reads for stability
}
