// Do not remove the include below
#include "lab2_1.h"
#define FLED 10
#define RLED 9


//The setup function is called once at startup of the sketch
void setup(){
	pinMode(FLED, OUTPUT);
	pinMode(RLED, OUTPUT);
}

// The loop function is called in an endless loop
void loop(){
	int i;
	int Fvalue=0, Rvalue=255;

	for(i=0; i<7; i++){
		analogWrite(FLED, Fvalue);
		analogWrite(RLED, Rvalue);
		delay(625);
		Fvalue+=30;
		Rvalue-=30;
	}
	Fvalue=255;
	Rvalue=0;
	analogWrite(FLED, Fvalue);
	analogWrite(RLED, Rvalue);
	delay(625);

	for(i=0; i<7; i++){
		analogWrite(FLED, Fvalue);
		analogWrite(RLED, Rvalue);
		delay(625);
		Fvalue-=30;
		Rvalue+=30;
	}
	Fvalue=0;
	Rvalue=255;
	analogWrite(FLED, Fvalue);
	analogWrite(RLED, Rvalue);
	delay(625);
}
