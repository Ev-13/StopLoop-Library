/*
 * StopLoop.h
 */

#ifndef StopLoop_h
#define StopLoop_h


// library interface description
class StopLoop
{
  // user-accessible "public" interface
  public:
    StopLoop();
    void begin();
    void stopFunction();

  private:
    bool created;

};

#endif
 

