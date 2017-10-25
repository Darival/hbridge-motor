#include <Motor.h>

Motor motor(6,13);

void setup() {
}

void loop() {
  motor.fordward();
  delay(1000);
  
  motor.backward();
  delay(1000);
}
