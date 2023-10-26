/*
 * StopLoop.h
 */

#ifndef StopLoop_h
#define StopLoop_h

#include <Time.h>

// library interface description
class StopLoop
{
  // user-accessible "public" interface
  public:
    StopLoop(int baudRate);
    void stopFunction();
    void begin();
  
  private:
    bool called;
    int baud;

};

#endif
 

