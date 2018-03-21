/*
 * _7segled.h
 *
 * Created: 19-Mar-18 11:52:17 PM
 *  Author: Om
 */ 


#ifndef SSEGLED_H_
#define SSEGLED_H_
#endif /* 7SEGLED_H_ */


#if defined(SSEGLED_H_)


#define seg_led_on PORTD


#define a PORTD0
#define b PORTD1
#define c PORTD2
#define d PORTD3
#define e PORTD4
#define f PORTD5
#define g PORTD6	
#define dp PORTD7

#endif

void initsseg(void);
#if defined(_ccathode_)
void ssegledcc(unsigned int);
#endif
#if defined(_canode_)
void ssegledca(unsigned int);
#endif

	
	
	



