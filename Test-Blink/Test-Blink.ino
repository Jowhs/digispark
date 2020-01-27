void setup() {
  // initialize the digital pin as an output.
  //pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  delay(500);               // wait for a second
  //digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(500);               // wait for a second
}
