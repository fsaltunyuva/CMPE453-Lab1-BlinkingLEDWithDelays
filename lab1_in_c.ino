#include <avr/io.h> 
#include <util/delay.h>

int main(void) {

DDRD = 0b01001000;
DDRB = 0b00000010; 

while (1) {
    PORTD = 0b01001000; 
    PORTB = 0b00000010;
    _delay_ms(3000);

    PORTD = 0b01000000; 
    PORTB = 0b00000000;
    _delay_ms(4000);

    PORTD = 0b00001000; 
    PORTB = 0b00000010;
    _delay_ms(5000);

    PORTD = 0b00000000; 
    PORTB = 0b00000000;
    _delay_ms(2000);
  } 
  return 0; 
}
