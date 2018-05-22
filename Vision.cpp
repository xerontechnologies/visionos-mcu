#include "Arduino.h"
#include "Vision.h"

VisionOutput::VisionOutput()
{
pinMode(13, OUTPUT);
pinMode(22, OUTPUT);
pinMode(24, OUTPUT);
pinMode(26, OUTPUT);
pinMode(28, OUTPUT);
pinMode(30, OUTPUT);
pinMode(31, OUTPUT);
pinMode(32, OUTPUT);
pinMode(33, OUTPUT);
pinMode(34, OUTPUT);
pinMode(35, OUTPUT);
pinMode(36, OUTPUT);
pinMode(37, OUTPUT);
pinMode(38, OUTPUT);
pinMode(39, OUTPUT);
pinMode(40, OUTPUT);
pinMode(41, OUTPUT);
pinMode(42, OUTPUT);
pinMode(43, OUTPUT);
pinMode(44, OUTPUT);
pinMode(45, OUTPUT);
pinMode(46, OUTPUT);
pinMode(47, OUTPUT);
pinMode(48, OUTPUT);
pinMode(49, OUTPUT);
pinMode(50, OUTPUT);
pinMode(51, OUTPUT);
pinMode(52, OUTPUT);
pinMode(53, OUTPUT);

pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
}
//Digital output functions
void VisionOutput::LED(int valLED)
{
if(valLED==0){
  digitalWrite(13, LOW);}
else{
  digitalWrite(13, HIGH);}
}

void VisionOutput::OD13(int val13)
{
if(val13==0){
  digitalWrite(13, LOW);}
else{
  digitalWrite(13, HIGH);}
}

void VisionOutput::OD50(int val50)
{
if(val50==0){
  digitalWrite(50, LOW);}
else{
  digitalWrite(50, HIGH);}
}
//PWM output functions
void VisionOutput::OPWM2(int valpwm2)
{
analogWrite(2, valpwm2);
}

void VisionOutput::OPWM3(int valpwm3)
{
analogWrite(3, valpwm3);
}

void VisionOutput::OPWM4(int valpwm4)
{
analogWrite(4, valpwm4);
}

void VisionOutput::OPWM5(int valpwm5)
{
analogWrite(5, valpwm5);
}

void VisionOutput::OPWM6(int valpwm6)
{
analogWrite(6, valpwm6);
}

void VisionOutput::OPWM7(int valpwm7)
{
analogWrite(7, valpwm7);
}

void VisionOutput::OPWM8(int valpwm8)
{
analogWrite(8, valpwm8);
}

void VisionOutput::OPWM9(int valpwm9)
{
analogWrite(9, valpwm9);
}

void VisionOutput::OPWM10(int valpwm10)
{
analogWrite(10, valpwm10);
}

void VisionOutput::OPWM11(int valpwm11)
{
analogWrite(11, valpwm11);
}

void VisionOutput::OPWM12(int valpwm12)
{
analogWrite(12, valpwm12);
}
//Digital input functions
VisionInput::VisionInput()
{
pinMode(13, INPUT);
pinMode(22, INPUT);
pinMode(24, INPUT);
pinMode(26, INPUT);
pinMode(28, INPUT);
pinMode(30, INPUT);
pinMode(31, INPUT);
pinMode(32, INPUT);
pinMode(33, INPUT);
pinMode(34, INPUT);
pinMode(35, INPUT);
pinMode(36, INPUT);
pinMode(37, INPUT);
pinMode(38, INPUT);
pinMode(39, INPUT);
pinMode(40, INPUT);
pinMode(41, INPUT);
pinMode(42, INPUT);
pinMode(43, INPUT);
pinMode(44, INPUT);
pinMode(45, INPUT);
pinMode(46, INPUT);
pinMode(47, INPUT);
pinMode(48, INPUT);
pinMode(49, INPUT);
pinMode(50, INPUT);
pinMode(51, INPUT);
pinMode(52, INPUT);
pinMode(53, INPUT);
}

int VisionInput::ID13()
{
retVal13=digitalRead(13);
return retVal13;
}

int VisionInput::ID22()
{
retVal22=digitalRead(22);
return retVal22;
}

int VisionInput::ID24()
{
retVal24=digitalRead(24);
return retVal24;
}

int VisionInput::ID26()
{
retVal26=digitalRead(26);
return retVal26;
}


int VisionInput::ID28()
{
retVal28=digitalRead(28);
return retVal28;
}


int VisionInput::ID30()
{
retVal30=digitalRead(30);
return retVal30;
}

int VisionInput::ID31()
{
retVal31=digitalRead(31);
return retVal31;
}

int VisionInput::ID32()
{
retVal32=digitalRead(32);
return retVal32;
}

int VisionInput::ID33()
{
retVal33=digitalRead(33);
return retVal33;
}

int VisionInput::ID34()
{
retVal34=digitalRead(34);
return retVal34;
}

int VisionInput::ID35()
{
retVal35=digitalRead(35);
return retVal35;
}

int VisionInput::ID36()
{
retVal36=digitalRead(36);
return retVal36;
}

int VisionInput::ID37()
{
retVal37=digitalRead(37);
return retVal37;
}

int VisionInput::ID38()
{
retVal38=digitalRead(38);
return retVal38;
}

int VisionInput::ID39()
{
retVal39=digitalRead(39);
return retVal39;
}

int VisionInput::ID40()
{
retVal40=digitalRead(40);
return retVal40;
}

int VisionInput::ID41()
{
retVal41=digitalRead(41);
return retVal41;
}

int VisionInput::ID42()
{
retVal42=digitalRead(42);
return retVal42;
}

int VisionInput::ID43()
{
retVal43=digitalRead(43);
return retVal43;
}

int VisionInput::ID44()
{
retVal44=digitalRead(44);
return retVal44;
}

int VisionInput::ID45()
{
retVal45=digitalRead(45);
return retVal45;
}

int VisionInput::ID46()
{
retVal46=digitalRead(46);
return retVal46;
}

int VisionInput::ID47()
{
retVal47=digitalRead(47);
return retVal47;
}

int VisionInput::ID48()
{
retVal48=digitalRead(48);
return retVal48;
}

int VisionInput::ID49()
{
retVal49=digitalRead(49);
return retVal49;
}

int VisionInput::ID50()
{
retVal50=digitalRead(50);
return retVal50;
}

int VisionInput::ID51()
{
retVal51=digitalRead(51);
return retVal51;
}

int VisionInput::ID52()
{
retVal52=digitalRead(52);
return retVal52;
}

int VisionInput::ID53()
{
retVal53=digitalRead(53);
return retVal53;
}
//Analog input pins
int VisionInput::IA0()
{
anret0=analogRead(0);
return anret0;
}

int VisionInput::IA1()
{
anret1=analogRead(0);
return anret1;
}

int VisionInput::IA2()
{
anret2=analogRead(0);
return anret2;
}

int VisionInput::IA3()
{
anret3=analogRead(0);
return anret3;
}

int VisionInput::IA4()
{
anret4=analogRead(0);
return anret4;
}

int VisionInput::IA5()
{
anret5=analogRead(0);
return anret5;
}

int VisionInput::IA6()
{
anret6=analogRead(0);
return anret6;
}

int VisionInput::IA7()
{
anret7=analogRead(0);
return anret7;
}

int VisionInput::IA8()
{
anret8=analogRead(0);
return anret8;
}

int VisionInput::IA9()
{
anret9=analogRead(0);
return anret9;
}

int VisionInput::IA10()
{
anret10=analogRead(0);
return anret10;
}

int VisionInput::IA11()
{
anret11=analogRead(0);
return anret11;
}

int VisionInput::IA12()
{
anret12=analogRead(0);
return anret12;
}

int VisionInput::IA13()
{
anret13=analogRead(0);
return anret13;
}

int VisionInput::IA14()
{
anret14=analogRead(0);
return anret14;
}

int VisionInput::IA15()
{
anret15=analogRead(0);
return anret15;
}
