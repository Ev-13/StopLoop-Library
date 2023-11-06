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
  if(Serial.available()){ //pause the loop() if input is detected in the Serial port
    Serial.println("Stopping");

    Serial.flush();  //flush the Serial port
    while(Serial.available()) Serial.read();  //if there's anything left in the Serial port then read it away

    while(!Serial.available()){  //wait until input is detected in the Serial port again
      ;
    }
  }
}
