#include <avr/io.h>

void main(void){
	
	DDRB = 0b00000011; //Sets port B pin 0 to output
	PORTB = 0b00000011; //Sets 5v to pin 0 on port B
	
	while(1){
	
	}
}