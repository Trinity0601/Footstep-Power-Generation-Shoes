/*
 * ADC_Attiny261.c
 *
 * Created: 01-05-2021 13:23:16
 * Author : chinmay patil
 */ 

#include <avr/io.h>
#define F_CPU 8000000UL

int main(void)
{
	DDRB=0xFF;
	ADCSRA=0x87;
	ADMUX=0x80;
	while(1){
		ADCSRA|=(1<<ADSC);
		while((ADCSRA&(1<<ADIF))==0);
		if ((ADC==0)){
			PORTB = 0x3F;
		}
		else if((ADC<=103)&(ADC>0)){
			PORTB=0x06;
		}
		else if((ADC<=205)&(ADC>103)){
			PORTB=0x5B;
		}
		else if((ADC<=308)&(ADC>205)){
			PORTB=0x4F;
		}
		else if((ADC<=411)&(ADC>308)){
			PORTB=0x66;
		}
		else if((ADC<=514)&(ADC>411)){
			PORTB=0x6D;
		}
		else if((ADC<=618)&(ADC>514)){
			PORTB=0x7D;
		}
		else if((ADC<=721)&(ADC>618)){
			PORTB=0x07;
		}
		else if((ADC<=825)&(ADC>721)){
			PORTB=0x7F;
		}
		else if((ADC<=927)&(ADC>825)){
			PORTB=0x6F;
		}
		else{
			PORTB=0x71;
		}
		
	}
}

