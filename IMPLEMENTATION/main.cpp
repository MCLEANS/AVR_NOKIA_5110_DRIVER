#include <avr/io.h>
#include <util/delay.h>
#include "NOKIA_5110.h"

#include <stdlib.h>

custom_libraries::NOKIA_5110 NOKIA(&PORTB, //CS_PORT
									2,		//CS_PIN
									&PORTB,	//RST_PORT
									1,		//RST_PIN
									&PORTD,	//DC_PORT
									7,		//DC_PIN
									16, //CLOCK PRESCALER
									false, // CLOCK PAHSE
									false, //CLOCK POLARITY
									false); //LSBFIRST

int main(){

	

	int second = 0;
	int minute = 10;

	while(1){

		second++;
		if(second > 59){
			second = 0;
			minute++;
		}

		char ch_seconds[4];
		char ch_minutes[4];

		itoa(second,ch_seconds,10);
		itoa(minute,ch_minutes,10);

		NOKIA.print(ch_minutes,20,3);
		NOKIA.print(":",35,3);
		NOKIA.print(ch_seconds,45,3);
		
		_delay_ms(1000);
		NOKIA.clear();
		
	}
}
