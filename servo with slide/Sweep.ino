
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(6);  // attaches the servo on pin 9 to the servo object
}


void loop() {

  int posAnalog = analogRead(A0);
  int pos = map(posAnalog,0,1023,0,180);
 
   myservo.write(pos);
  




}

