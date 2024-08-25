#include <Servo.h>

Servo myservo1;
Servo myservo2;


void setup() {
  // put your setup code here, to run once:
  myservo1.attach(11);
  myservo2.attach(10);



}

void loop() {

  int verRead = analogRead(A0);
  int horRead = analogRead(A1);
  int selRead = analogRead(A2);


  int verMap = map(verRead, 0, 1023, 0, 180);
  int horMap = map(horRead, 0, 1023, 0, 180);


  myservo1.write(verMap);
  myservo2.write(horMap);

  if (selRead == 0) {

    myservo1.write(90);
    myservo2.write(90);
  }


}
