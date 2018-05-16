#include "Arduino.h"
#include "Vision.h"

Vision::Vision(int pin)
{
pinMode(pin, OUTPUT); 
D28=pin;
}

void Vision::OD28(bool val)
{
if(val==0){
  digitalWrite(D28, LOW);}
else{
  digitalWrite(D28, HIGH);}
} 
