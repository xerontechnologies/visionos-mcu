#include "Arduino.h"
#include "Vision.h"

VisionOutput::VisionOutput(int firstpin, int secondpin, int pwmpin)
{
pinMode(firstpin, OUTPUT);
D13=firstpin;
pinMode(secondpin, OUTPUT);
D50=secondpin;
pinMode(pwmpin, OUTPUT);
PWM2=pwmpin;
}
//Digital output functions
void VisionOutput::OD13(int val1)
{
if(val1==0){
  digitalWrite(D13, LOW);}
else{
  digitalWrite(D13, HIGH);}
}

void VisionOutput::OD50(int val2)
{
if(val2==0){
  digitalWrite(D50, LOW);}
else{
  digitalWrite(D50, HIGH);}
}
//PWM output functions
void VisionOutput::OPWM2(int valpwm)
{
analogWrite(PWM2, valpwm);
}
//Digital input functions
VisionInput::VisionInput(int mypin)
{
pinMode(22, INPUT);
}

int VisionInput::ID22()
{
retVal=digitalRead(22);
return retVal;
}

int VisionInput::IA0()
{
anret=analogRead(0);
return anret;
}
