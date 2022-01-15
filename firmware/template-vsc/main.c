#include "main.h"
#include <avr/io.h>
#include <util/delay.h> //dodanie bilbioteki zwi�zanej z op�nieniem

int main(void)
{

	DDRB |= (1 << PORTB1); //ustawianie port�w wej�cia/wyj�cia

	TCCR1A |= (1 << COM1A1) | (1 << WGM10); 
	TCCR1B |= (1 << WGM12) | (1 << CS11); 
	//ustawianie trybu timera oraz ustawianie prescalera
	
	OCR1A = 0; //ustawienie warto�ci por�wnawczej


	ADMUX |= (1 << REFS0); //ustawianie rejestru multipleksera ADC
	ADCSRA |= (1 << ADPS1) | (1 << ADPS0); //ustawianie preskalera ADC
	ADCSRA |= (1 << ADEN); //w��czanie ADC


	int termistor;
	int PWM = 0;

	while (1)
	{
		ADCSRA |= (1 << ADSC); //uruchamianie pomiaru
		loop_until_bit_is_clear(ADCSRA, ADSC); //wykonywanie p�tli a� do zmiany rejestru ADSC na 0
		termistor = ADC;

		if ((termistor % 4) == 0)
		{
			PWM = termistor / 4;
		}

		OCR1A = PWM;
		_delay_ms(50);
	}
}