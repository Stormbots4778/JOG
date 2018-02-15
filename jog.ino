#include <Servo.h> 

Servo servo;

void setup() {
  servo.attach(9);
}

void loop() {
  servo.write((int) calculateValue(analogRead(2), 0.02));
}

float calculateValue(int input, float k) {
  return (-1.460889769662 * 0.00000000001) * (k - 0.174975562072) * pow(input - 511.5, 5) + (k * (input - 511.5) + 89.5);
}

