#ifndef StopLoop_h
#define StopLoop_h


// library interface description
class StopLoop {
  private:
    bool created;
    
  // user-accessible "public" interface
  public:
    StopLoop();
    void begin();
    void stopFunction();

};

#endif
 

