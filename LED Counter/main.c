#include <avr/io.h>
#include <util/delay.h>

void main(void){
	
	/*DDRA |= 1 << PINA1; //Sets port A pin 0 to output
	DDRA |= 1 << PINA1;
	DDRA &= ~ (1 << PINA2); //Sets Port A pin 2 to input
	PORTA |= 1 << PINA1; //Sets 5v to pin 1 on port A
	PORTA |= 1 << PINA2;  //Sets 5v to pin 2 on port A*/
	
	DDRA = 0b11111111;
	PORTA = 0b11111111;
	
	while(1){
		
		//PORTA ^= 1 << PINA0;
		//PORTA ^= 1 << PINA1;
		PORTA ^= 1 << PINA1;
		_delay_ms(100);
		
		
		/*if(bit_is_clear(PINA, 2)){
			_delay_ms(10);
		} else {
			_de4lay_ms(100);
		}*/
		
	
		
	}
}