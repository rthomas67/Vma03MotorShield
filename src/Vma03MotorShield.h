#ifndef VMA03_MOTOR_SHIELD_H
#define VMA03_MOTOR_SHIELD_H

#include <Arduino.h>

class Vma03MotorShield {

public:
    Vma03MotorShield();
    ~Vma03MotorShield();
    void runMotorA(int speed, int direction);
    void runMotorB(int speed, int direction);
    void stopMotorA();
    void stopMotorB();
};

#endif