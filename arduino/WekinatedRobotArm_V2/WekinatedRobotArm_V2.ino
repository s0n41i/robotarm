/*
   Wekinated Robot Arm

   Listens for serial messages and controls the Robot Arm
   according to the message received from Wekinator and communicated by Processing.

   To be used with the Processing sketch
   processing_osc_to_arduino.pde

   Written by Sruthi Gopinathan, Wesley Nelson, and Sonali Patel in 2026
*/

//Servo library
#include <Servo.h>

//creates 4 servo objects to control the 4 servos within the robot arm
Servo servoLA;  // lower arm
Servo servoB;   // bottom (base)
Servo servoUA;  // upper arm
Servo servoH;   // head

// initial variable used servo class
int servoCode = -1;

void setup() {
  Serial.begin(9600);  // initialise the serial communication

  servoLA.attach(2); // white   // LOWER ARM
  servoB.attach(3);  // green  // BOTTOM
  servoUA.attach(4); // blue   // UPPER ARM
  servoH.attach(5);  // purple // HEAD
}

void loop() {
  // wait for a message to arrive
  if (Serial.available()) {
    // save the message when it arrives
    servoCode = Serial.read();
  }

  switch (servoCode) {
    case 1:
      //when input is class 1, LA moves to 0 position
      servoLA.write(0);
      break;
    case 2:
      //when input is class 2, LA moves to 180 position
      servoLA.write(180);
      break;
    case 3:
      //when input is class 3, B moves to 0 position
      servoB.write(0);
      break;
    case 4:
      //when input is class 4, B moves to 180 position
      servoB.write(180);
      break;
    case 5:
      //when input is class 5, UA moves to 0 position
      servoUA.write(0);
      break;
    case 6:
      //when input is class 6, UA moves to 180 position
      servoUA.write(180);
      break;
    case 7:
      //when input is class 7, H moves to 0 position
      servoH.write(0);
      break;
    case 8:
      //when input is class 8, H moves to 180 position
      servoH.write(180);
      break;
    case 9:
      //when input is class 9, all servos move to 90 position
      servoUA.write(90);
      servoLA.write(90);
      servoB.write(90);
      servoH.write(90);
      break;
    default:
      //if class is not found, default class is run and servos still move to 90 position (like class 9)
      servoUA.write(90);
      servoLA.write(90);
      servoB.write(90);
      servoH.write(90);
      break;
  }

}