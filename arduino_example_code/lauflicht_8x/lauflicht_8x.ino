/*
 Lauflicht ;-)
 */

int led1 = 8;           // the pin that the LED is attached to
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;
int led6 = 13;
int led7 = 14;
int led8 = 15;
int led9 = 16;
int led10 = 17;

// the setup routine runs once when you press reset:
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(1000);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(1000);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(1000);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(1000);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(1000);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(1000);
  digitalWrite(led8, LOW);
//  delay(1000);
}
