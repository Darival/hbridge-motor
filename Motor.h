/*
  Motor.h - Library for controlling H-bridge with 2 relays.
  Created by Cesar R. Contreras Villegas, October 24, 2017.
  Released into the public domain.
*/

#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor
{
  public:
    Motor(int pinA, int pinB);
    void brake();
    void fordward();
    void backward();
    bool isMoving();
    bool isMovingFordward();
    bool isMovingBackward();
  private:
    int _pinA;
    int _pinB;
    int _pinC;
    int _pinD;
};

#endif