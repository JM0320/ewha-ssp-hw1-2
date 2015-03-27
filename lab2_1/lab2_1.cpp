// Do not remove the include below
#include "lab2_1.h"
#define FLED 10
#define RLED 9
int Rvalue=100;

void myAnalogWrite (int pin, int percent, int time){
	int i=0;
	for(i; i<(time/duty); i++){
		digitalWrite(pin, HIGH);
		delay(percent*duty/100);
		digitalWrite(pin, LOW);
		delay(((100-percent)*duty)/100);
	}
}

//The setup function is called once at startup of the sketch
void setup(){
	pinMode(RLED, OUTPUT);
}

// The loop function is called in an endless loop
void loop(){
	int i;

	while(Rvalue>0){
		myAnalogWrite(RLED, Rvalue, 1000);
		Rvalue-=10;
	}

	if(Rvalue==0){
		while(1){
			digitalWrite(RLED, LOW);
		}
	}
}
