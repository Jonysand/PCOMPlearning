void setup() {
  // setting digital output pin
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the state of the button
  int buttonState = digitalRead(2);
  
  // blink LED
  if(buttonState == HIGH){
    Serial.println("YES!");
  }
}
