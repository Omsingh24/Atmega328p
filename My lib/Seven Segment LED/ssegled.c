/*
 * _7segled.c
 *
 * Created: 19-Mar-18 11:52:32 PM
 *  Author: Om
 */ 
#include <avr/io.h>
#include "ssegled.h"

void initsseg()
{
DDRD =0xFF;	 //makes PORTD as output
}


void ssegledcc(unsigned int num)
{  	
		int dot=0; //dot flag 
	
		if (num>=10) //check if dot enabled (number+10 enables dot)
		{
			num=num-10; //check if dot (10 is subtracted to get digit value and dot flag set high)
			dot=1; //set dot flag high
		}
	
		if (num==0){
			seg_led_on = 0x3F; 
		}
		if (num==1){
			seg_led_on = 0x06;
		}
		if (num==2){
			seg_led_on = 0x5B;
		}
		if (num==3){
			seg_led_on = 0x4F;
		}
		if (num==4){
			seg_led_on = 0x66;
		}
		if (num==5){
			seg_led_on = 0x6D;
		}
		if (num==6){
			seg_led_on = 0x7D;
		}
		if (num==7){
			seg_led_on = 0x07;
		}
		if (num==8){
			seg_led_on = 0x7F;
		}
		if (num==9){
			seg_led_on = 0x6F;
		}
		if (dot==1)
		{
			seg_led_on = (1<<dp);
		}
		
}

void ssegledca(unsigned int num)
{
	int dot=0;
	
	if (num>=10)
	{
		num=num-10;
		dot=1;
	}
	
	if (num==0){
		seg_led_on = (~0x3F) ; //(1<<a) | (1<<b) | (1<<c) | (1<<d) | (1<<e) |(1<<f)
	}
	else
	if (num==1){
		seg_led_on = ~0x06;
	}
	if (num==2){
		seg_led_on = ~0x5B;
	}
	if (num==3){
		seg_led_on = ~0x4F;
	}
	if (num==4){
		seg_led_on = ~0x66;
	}
	if (num==5){
		seg_led_on = ~0x6D;
	}
	if (num==6){
		seg_led_on = ~0x7D;
	}
	if (num==7){
		seg_led_on = ~0x07;
	}
	if (num==8){
		seg_led_on = ~0x7F;
	}
	if (num==9){
		seg_led_on = ~0x6F;
	}
	if (dot==1)
	{
		seg_led_on  &= ~(1<<dp);
	}
	
}
