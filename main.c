#define __AVR_ATmega8__
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

// #include<stdio.h>

void KITT();

void wave();

int main() {
    // Twój kod tutaj
    
    // DDRD |= (255 << DDD0);
    DDRD = 0xFF;
    // PORTD = 0xFF;
    // DDRB |= (255 << DDB0);
    // DDRB |= 0b0000010;
    // DDRB |= 3;

    // uint16_t i = 1;
    // uint8_t j = 0;

    // bool back = false;

    while (1) {
        // Ustaw pin PB0 na stan wysoki (włącz diodę LED)
        // PORTB |= (1 << PORTB0);
        // PORTD = 0;

        // PORTD = i;


        // PORTD &= ~(i << PORTD0);
        // Poczekaj przez pewien okres
        // _delay_ms(100); // Poczekaj 500 ms (0,5 sekundy)

        // PORTD |= (i << PORTD0);

        // PORTD ^= (1 << j);

        // j++;

        // // PORTD = (4 << 2);

        // _delay_ms(100);

        // if(j == 8)
        // {
        //     j = 0;
        // }

        wave();
        // KITT();

        // Ustaw pin PB0 na stan niski (wyłącz diodę LED)
        
        // PORTD &= ~(i << PORTD0);

        // PORTD = 0;
        
        // Poczekaj przez ten sam okres
        
        // _delay_ms(500); // Poczekaj 500 ms (0,5 sekundy) 

        // if(!back)
        // {
        //     i *= 2;

        //     if(i > 128)
        //     {
        //         i /= 2;
        //         back = true;


        //     }
        // }

        // if(back)
        // {
        //     i /= 2;

        //     if(i <= 1)
        //         back = false;
        //     // i = 1;
        // }

        
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
