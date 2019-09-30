void setup()
{
  // Pin config
  pinMode(2, INPUT);
    
  
  // flag config
  int pFlag = LOW;
}

void loop()
{
  if (pFlag == LOW){
    pFlag = digitalRead(2);
  }
  
  
  // main program
  if(pFlag==HIGH){
    
    
    
    
  }
  
  delay(10);
}
