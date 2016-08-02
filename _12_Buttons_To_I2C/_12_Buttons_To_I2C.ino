#include<Wire.h>

#define Button01  P1_0
#define Button02  P1_1
#define Button03  P1_2
#define Button04  P1_3
#define Button05  P1_4
#define Button06  P1_5
#define Button07  P2_0
#define Button08  P2_1
#define Button09  P2_2
#define Button10  P2_3
#define Button11  P2_4
#define Button12  P2_5

#define SlaveAddress  0x03

void setup(){
  pinMode(Button01, INPUT_PULLUP);
  pinMode(Button02, INPUT_PULLUP);
  pinMode(Button03, INPUT_PULLUP);
  pinMode(Button04, INPUT_PULLUP);
  pinMode(Button05, INPUT_PULLUP);
  pinMode(Button06, INPUT_PULLUP);
  pinMode(Button07, INPUT_PULLUP);
  pinMode(Button08, INPUT_PULLUP);
  pinMode(Button09, INPUT_PULLUP);
  pinMode(Button10, INPUT_PULLUP);
  pinMode(Button11, INPUT_PULLUP);
  pinMode(Button12, INPUT_PULLUP);
  
  Wire.begin();
}


void loop(){
  // put your main code here, to run repeatedly:
       if(!digitalRead(Button01)) { while(!digitalRead(Button01)); delay(10); Wire.beginTransmission(SlaveAddress); Wire.write('1'); Wire.endTransmission();}
  else if(!digitalRead(Button02)) { while(!digitalRead(Button02)); delay(10); Wire.beginTransmission(SlaveAddress); Wire.write('2'); Wire.endTransmission();}
  else if(!digitalRead(Button03)) { while(!digitalRead(Button03)); delay(10); Wire.beginTransmission(SlaveAddress); Wire.write('3'); Wire.endTransmission();}
  else if(!digitalRead(Button04)) { while(!digitalRead(Button04)); delay(10); Wire.beginTransmission(SlaveAddress); Wire.write('4'); Wire.endTransmission();}
  else if(!digitalRead(Button05)) { while(!digitalRead(Button05)); delay(10); Wire.beginTransmission(SlaveAddress); Wire.write('5'); Wire.endTransmission();}
  else if(!digitalRead(Button06)) { while(!digitalRead(Button06)); delay(10); Wire.beginTransmission(SlaveAddress); Wire.write('6'); Wire.endTransmission();}
  else if(!digitalRead(Button07)) { while(!digitalRead(Button07)); delay(10); Wire.beginTransmission(SlaveAddress); Wire.write('7'); Wire.endTransmission();}
  else if(!digitalRead(Button08)) { while(!digitalRead(Button08)); delay(10); Wire.beginTransmission(SlaveAddress); Wire.write('8'); Wire.endTransmission();}
  else if(!digitalRead(Button09)) { while(!digitalRead(Button09)); delay(10); Wire.beginTransmission(SlaveAddress); Wire.write('9'); Wire.endTransmission();}
  else if(!digitalRead(Button10)) { while(!digitalRead(Button10)); delay(10); Wire.beginTransmission(SlaveAddress); Wire.write('A'); Wire.endTransmission();}
  else if(!digitalRead(Button11)) { while(!digitalRead(Button11)); delay(10); Wire.beginTransmission(SlaveAddress); Wire.write('B'); Wire.endTransmission();}
  else if(!digitalRead(Button12)) { while(!digitalRead(Button12)); delay(10); Wire.beginTransmission(SlaveAddress); Wire.write('C'); Wire.endTransmission();}  
}
