// Sweep Unit Test

#include <Servo.h>

//creates 4 servo objects to control the 4 servos within the robot arm
Servo servoLA;  // lower arm
Servo servoB;   // bottom (base)
Servo servoUA;  // upper arm
Servo servoH;   // head

void setup() {
  Serial.begin(9600);  // initialise the serial communication

  servoLA.attach(2); // white   // LOWER ARM
  servoB.attach(3);  // green  // BOTTOM
  servoUA.attach(4); // blue   // UPPER ARM
  servoH.attach(5);  // purple // HEAD
}

//the below section runs all 4 robot arm servos using the following section of the sketch
int pos = 0;

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180  degrees
      // in steps of 1 degree
    servoH.write(pos);              //  tell servo to go to position in variable 'pos'
    delay(15);                       //  waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >=  0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servoH.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180  degrees
      // in steps of 1 degree
    servoB.write(pos);              //  tell servo to go to position in variable 'pos'
    delay(15);                       //  waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >=  0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servoB.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180  degrees
      // in steps of 1 degree
    servoUA.write(pos);              //  tell servo to go to position in variable 'pos'
    delay(15);                       //  waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >=  0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servoUA.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180  degrees
      // in steps of 1 degree
    servoLA.write(pos);              //  tell servo to go to position in variable 'pos'
    delay(15);                       //  waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >=  0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servoLA.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}