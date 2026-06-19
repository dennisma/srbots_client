#define BLUE_MOTORS

#include "RobotSetup.hpp"
using namespace srbots;

void setup() {
  Serial.begin(115200);
  RobotSetup();
}

int speed=60;

void loop() {
  Serial.println("Yo");
  speed = -speed;
  leftmotor.speed(speed);
  rightmotor.speed(speed);
  delay(3000);
}