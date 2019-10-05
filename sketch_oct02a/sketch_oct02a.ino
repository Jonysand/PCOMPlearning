const byte howMany = 20;

int readings[howMany];
int readIndex = 0;
int total = 0;
int average = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  total -= readings[readIndex];
  
  //read from the sensor
  readings[readIndex] = analogRead(A0);

  //add to the total
  total += readings[readIndex];

  //advance to the next place in array
  readIndex++;

  if(readIndex>=howMany){
    readIndex = 0;
  }

  average = total/howMany;
  
  Serial.println(average);
  analogWrite(2, average/4);
}
