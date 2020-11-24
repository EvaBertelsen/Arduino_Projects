
int led = D0; // WeMos Mini 
void setup() {
  pinMode(led, OUTPUT); // Declare the LED as an output
}

void loop() {
  digitalWrite(led, HIGH);
  Serial.print("High");
  delay (1000);
  digitalWrite(led, LOW);
  Serial.print("low");
 
}
