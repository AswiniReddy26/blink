
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(D4, OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D3,OUTPUT);
 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(D4, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(D3,HIGH);
  delay(1000);   // turn the LED on (HIGH is the voltage level)
                   // wait for a second
  digitalWrite(D4, LOW); 
  digitalWrite(D1, LOW);
  digitalWrite(D3,LOW);// turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
