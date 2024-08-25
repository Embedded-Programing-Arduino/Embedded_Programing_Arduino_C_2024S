
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(6);  // attaches the servo on pin 9 to the servo object
}


void loop() {
  for (int i = 0; i <= 180; i++)
  { myservo.write(i);
    delay(20);
  }

  for (int i = 180; i >= 0; i--)
  { myservo.write(i);
    delay(20);
  }



}

