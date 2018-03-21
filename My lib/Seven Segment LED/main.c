/*
 * Master.c
 *
 * Created: 18-Mar-18 3:41:16 PM
 * Author : Om
 */ 
#ifndef F_CPU
#define F_CPU 1000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

#define _canode_ //using seven segment led of common anode type
#include "ssegled.h" //include seven seg header file

int main(void)
{	
	initsseg(); //7 seg led connected to PORTD[0:7] see ssegled.h for pin connection
	
	while(1)
	{	
		_delay_ms(250);
		for (int i =0;i<20 ;i++) //loop from value 0 to 9 and 0(dot) to 9(dot)
		{
		ssegledca(i);
		_delay_ms(250); //delay
		}
	
	}
}