#ifndef Vision_h
#define Vision_h

#include "Arduino.h"

class VisionOutput
{
  public:
    VisionOutput(int firstpin=13, int secondpin=50, int pwmpin=2);
    int val1;
    void OD13(int val1);
    int val2;
    void OD50(int val2);
    int valpwm;
    void OPWM2(int valpwm);
    int PWM2;
    int D13;
    int D50;
};

class VisionInput
{
  public:
    VisionInput(int mypin=22);
  //  int D22;
    int retVal;
    int ID22();
    int anret;
    int IA0();
};

#endif
