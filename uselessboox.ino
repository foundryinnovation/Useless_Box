#include <Servo.h>
Servo myservo;
#define inputPin 3
#define ledPin 2
#define On HIGH
#define Off LOW

void setup() {
  // put your setup code here, to run once:
  pinMode(inputPin, INPUT);
  pinMode(ledPin, OUTPUT);
  myservo.attach(4);
}

void loop() {
  // put your main code here, to run repeatedly:
  int inputState = digitalRead(inputPin);
  int ledState = digitalRead(ledPin);
  if (inputState == On && ledState == Off){
    digitalWrite (ledPin, On);
    myservo.write(180);
    delay(15);
  }
  else if (inputState == On && ledState == On){
    NULL;
  }
  else if (inputState == Off && ledState == On){
    digitalWrite (ledPin, Off);
    myservo.write(0);
    delay(15);
  }
  else if (inputState == Off && ledState == Off){
    NULL;
  }
  delay(10);
}
