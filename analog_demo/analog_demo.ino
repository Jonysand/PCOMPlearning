#include <Servo.h>

Servo servoMotor;
int sensorValue = 0;
int sensorPin = A0;
int servoPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
  servoMotor.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(A0);

  int servoAngle = map(sensorValue, 0, 1023, 0, 180);
  if(millis()%20<2){
    Serial.println(servoAngle);
    servoMotor.write(servoAngle);
  }
}
