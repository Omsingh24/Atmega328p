#ifndef F_CPU
#define F_CPU 1000000UL // 16 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC = 0xFF;
	DDRB =0xFF; // Makes PORTC as Output
	while(1) //infinite loop
	{
		PORTB = 0xFF; //Turns ON All LEDs
		_delay_ms(1000); //1 second delay
		PORTB &= ~(1<<PORTB1);
		PORTC = 0xFF;
		_delay_ms(1000);
		PORTC= 0x00; //Turns OFF All LEDs
		 //1 second delay
	}
}