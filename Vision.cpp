#include "Arduino.h"
#include "Vision.h"

VisionOutput::VisionOutput(int firstpin, int secondpin)
{
pinMode(firstpin, OUTPUT);
D13=firstpin;
pinMode(secondpin, OUTPUT);
D50=secondpin;
}

void VisionOutput::OD13(bool val1)
{
if(val1==0){
  digitalWrite(D13, LOW);}
else{
  digitalWrite(D13, HIGH);}
}

void VisionOutput::OD50(bool val2)
{
if(val2==0){
  digitalWrite(D50, LOW);}
else{
  digitalWrite(D50, HIGH);}
}

VisionInput::VisionInput(int mypin)
{
pinMode(mypin, INPUT);
D22=mypin;
}

void VisionInput::ID22(int retVal)
{
retVal=digitalRead(D22);
}
