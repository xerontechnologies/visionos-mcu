#ifndef Vision_h
#define Vision_h

#include "Arduino.h"

class Vision
{
  public:
    Vision(int pin);
    bool val;
    void OD28(bool val);
  private:
    int D28;
};

#endif
