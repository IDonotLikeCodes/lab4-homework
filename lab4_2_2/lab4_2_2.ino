void setup() {
  pinMode(4, OUTPUT);//define pin 4 is an output
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(4, HIGH);// the voltage of pin 4 is 3.3
  delay(1000);// this command is used for adjusting the frequency that the LED blinks
  digitalWrite(4, LOW);// the voltage of pin 4 is 0
  delay(1000);
  // put your main code here, to run repeatedly:

}
