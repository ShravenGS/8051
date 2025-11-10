#include<REGX51.h>
void delay(unsigned int ms){
	unsigned int i;
	for(i=0;i<ms;i++){
		TMOD&=0xF0;//Clearing lower 4 bits for the timer 0
		TMOD|=0x01;	//Timer 0 Mode 1(16 bit)
		TH0=0xFC;//load high byte
		TL0=0x67;//load low byte
		TR0=1;//start timer0
		while(TF0==0);// wait for overflow
		TR0=0;//Stop timer 0
		TF0=0;//Clear overflow flag
	
	}
}
