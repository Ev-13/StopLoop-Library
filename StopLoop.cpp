#include <Arduino.h>
#include "StopLoop.h"


StopLoop::StopLoop()
{
  created = true;
}
  
// PUBLIC FUNCTIONS
void StopLoop::begin()
{
  Serial.println("Stopping Function available.");
}


void StopLoop::stopFunction()
{
  if(Serial.available()){
    Serial.println("Stopping");
    Serial.flush();
    while(!Serial.available()){
      ;
    }
  }
}
