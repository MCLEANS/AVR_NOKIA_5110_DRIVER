#include <avr/io.h>
#include <util/delay.h>
#include "NOKIA_5110.h"

custom_libraries::NOKIA_5110 NOKIA(&PORTB,
									2,
									&PORTB,
									1,
									&PORTD,
									7,
									16,
									false,
									false,
									false);

int main(){

	NOKIA.print("HELLO WORLD",10,3);

	while(1){

	

	}
}
