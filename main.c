#define __AVR_ATmega8__
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

// #include<stdio.h>

void KITT();

void wave();

int main() {
    
    // DDRD |= (255 << DDD0);
    DDRD = 0xFF;


    while (1) {

        wave();
        // KITT();

        
    }
    return 0;
}

void KITT()
{
    static uint16_t i = 1;
    static bool back = false;


    PORTD |= (i << PORTD0);

    _delay_ms(100);

    PORTD &= ~(i << PORTD0);

    if(!back)
    {
        i *= 2;

        if(i > 128)
        {
            i /= 2;
            back = true;
        }
    }

    if(back)
    {
        i /= 2;

        if(i <= 1)
        back = false;
        // i = 1;
    }



}

void wave()
{
        static uint8_t j = 0;

        PORTD ^= (1 << j);

        ++j;

        _delay_ms(100);

        if(j == PORTD7 + 1)
        {
            j = 0;
        }
}
