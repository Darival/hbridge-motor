#include "Arduino.h"
#include "Motor.h"

Motor::Motor(int pinA, int pinB)
{
    pinMode(pinA, OUTPUT);
    pinMode(pinB, OUTPUT);
    _pinA = pinA;
    _pinB = pinB;
    digitalWrite(_pinA, LOW);
    digitalWrite(_pinB, LOW);
}

void Motor::brake(){
    digitalWrite(_pinA, LOW);
    digitalWrite(_pinB, LOW);
}
void Motor::fordward(){
    digitalWrite(_pinA, HIGH);
    digitalWrite(_pinB, LOW);
};

void Motor::backward(){
    digitalWrite(_pinA, LOW);
    digitalWrite(_pinB, HIGH);
};

bool Motor::isMoving(){
    return digitalRead(_pinA) != digitalRead(_pinB);
};

bool Motor::isMovingFordward(){
    return digitalRead(_pinA) ==  1 && digitalRead(_pinB) ==  0;
};

bool Motor::isMovingBackward(){
    return digitalRead(_pinA) ==  0 && digitalRead(_pinB) ==  1;
};
