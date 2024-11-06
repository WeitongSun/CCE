#include <Adafruit_CircuitPlayground.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  CircuitPlayground.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  int x = CircuitPlayground.motionX();
  Serial.print(x);
  Serial.print("\t");
  int y = CircuitPlayground.motionY();
  Serial.print(y);
  Serial.print("\t");
  int z = CircuitPlayground.motionZ();
  Serial.print(z);
   Serial.println(' ');





}
