/*
 Lauflicht ;-)
 */

int led1 = 32;           // GPIO Pin 7 and 10
int led2 = 33;
int led3 = 10;

// the setup routine runs once when you press reset:
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  //pinMode(led3, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(1000);
//  digitalWrite(led2, HIGH);
//  delay(1000);
//  digitalWrite(led2, LOW);
//  digitalWrite(led3, HIGH);
//  delay(1000);
//  digitalWrite(led3, LOW);  
//  delay(1000);
}
