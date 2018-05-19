#ifndef Vision_h
#define Vision_h

#include "Arduino.h"

class VisionOutput
{
  public:
    VisionOutput(int firstpin=13, int secondpin=50);
    bool val1;
    void OD13(bool val1);
    bool val2;
    void OD50(bool val2);
    int D13;
    int D50;
};

class VisionInput
{
  public:
    VisionInput(int mypin=22);
    int D22;
    void ID22(int retVal);
    int retVal;
};

#endif
