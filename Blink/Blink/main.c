#ifndef F_CPU
#define F_CPU 1000000UL // 16 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB =0xFF; // Makes PORTC as Output
	while(1) //infinite loop
	{
		PORTB = 0xFF; //Turns ON All LEDs
		_delay_ms(5000); //1 second delay
		PORTB= 0x00; //Turns OFF All LEDs
		_delay_ms(5000);
		 //1 second delay
	}
}