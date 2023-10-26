#include <Arduino.h>
#include "StopLoop.h"


StopLoop::StopLoop(int baudRate)
{
  baud = baudRate;
  called = false;
}
  
// PUBLIC FUNCTIONS
void StopLoop::begin()
{
  Serial.println("Stopping Function available.");
}


void StopLoop::stopFunction()
{
  if(Serial.available()){
    called = true;
    Serial.println("Stopping");
    while(1){
      ;
    }
  }
}
