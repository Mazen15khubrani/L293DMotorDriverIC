void setup() {
  //defined our motors 
  pinMode(1,OUTPUT);
   pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
   pinMode(4,OUTPUT);
}
  void loop() {
    // the motor directions
    digitalWrite(1,HIGH);
       digitalWrite(2,LOW);
       digitalWrite(3,HIGH);
       digitalWrite(4,LOW);
    delay(3000);
    // now change motor directions
     digitalWrite(1,LOW);
       digitalWrite(2,HIGH);
       digitalWrite(3,LOW);
       digitalWrite(4,HIGH);
    delay(3000);
     
  }
