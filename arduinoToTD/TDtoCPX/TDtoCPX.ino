#include <Adafruit_CircuitPlayground.h>
int LED = 13;
int state = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(10);
  //CircuitPlayground.begin();

  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    state = Serial.parseInt();
  }

  if(state == 0){
    digitalWrite(LED,LOW);

  }else{
    digitalWrite(LED, HIGH);

  }


}
