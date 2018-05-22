#ifndef Vision_h
#define Vision_h

#include "Arduino.h"

class VisionOutput
{
  public:
    VisionOutput();
    int valLED;
    void LED(int valLED);
    int val13;
    void OD13(int val13);
    int val50;
    void OD50(int val50);
    int valpwm2;
    void OPWM2(int valpwm2);
    int valpwm3;
    void OPWM3(int valpwm3);
    int valpwm4;
    void OPWM4(int valpwm4);
    int valpwm5;
    void OPWM5(int valpwm5);
    int valpwm6;
    void OPWM6(int valpwm6);
    int valpwm7;
    void OPWM7(int valpwm7);
    int valpwm8;
    void OPWM8(int valpwm8);
    int valpwm9;
    void OPWM9(int valpwm9);
    int valpwm10;
    void OPWM10(int valpwm10);
    int valpwm11;
    void OPWM11(int valpwm11);
    int valpwm12;
    void OPWM12(int valpwm12);
};

class VisionInput
{
  public:
    VisionInput();
    int retVal13;
    int ID13();
    int retVal13;
    int ID22();
    int retVal22;
    int ID24();
    int retVal24;
    int ID26();
    int retVal26;
    int ID28();
    int retVal28;
    int ID30();
    int retVal30;
    int ID31();
    int retVal31;
    int ID32();
    int retVal32;
    int ID33();
    int retVal33;
    int ID34();
    int retVal34;
    int ID35();
    int retVal35;
    int ID36();
    int retVal36;
    int ID37();
    int retVal37;
    int ID38();
    int retVal38;
    int ID39();
    int retVal39;
    int ID40();
    int retVal40;
    int ID41();
    int retVal41;
    int ID42();
    int retVal42;
    int ID43();
    int retVal43;
    int ID44();
    int retVal44;
    int ID45();
    int retVal45;
    int ID46();
    int retVal46;
    int ID47();
    int retVal47;
    int ID48();
    int retVal48;
    int ID49();
    int retVal49;
    int ID50();
    int retVal50;
    int ID51();
    int retVal51;
    int ID52();
    int retVal52;
    int ID53();
    int retVal53;

    int anret0;
    int IA0();
    int anret1;
    int IA1();
    int anret2;
    int IA2();
    int anret3;
    int IA3();
    int anret4;
    int IA4();
    int anret5;
    int IA5();
    int anret6;
    int IA6();
    int anret7;
    int IA7();
    int anret8;
    int IA8();
    int anret9;
    int IA9();
    int anret10;
    int IA10();
    int anret11;
    int IA11();
    int anret12;
    int IA12();
    int anret13;
    int IA13();
    int anret14;
    int IA14();
    int anret15;
    int IA15();
};

#endif
