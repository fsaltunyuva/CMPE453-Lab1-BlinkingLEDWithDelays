#include <avr/io.h> // Header file for the AVR Microcontroller.
#include <util/delay.h> // Header file for the delay function.

int main(void) {

  DDRD = 0b01001000; // Set the data direction register D to output on necessary pins.
  DDRB = 0b00000010; // Set the data direction register B to output on necessary pins.

  while (1) { // Infinite loop to keep the program running.

    // ON the all LEDs together and wait for 3000ms  
    PORTD = 0b01001000; 
    PORTB = 0b00000010;
    _delay_ms(3000);

    // OFF the red and yellow LEDs and ON the blue LED together and wait for 4000ms
    PORTD = 0b01000000; 
    PORTB = 0b00000000;
    _delay_ms(4000);

    // OFF the blue LED and ON the yellow and red LEDs together and wait for 5000ms
    PORTD = 0b00001000; 
    PORTB = 0b00000010;
    _delay_ms(5000);

    // OFF the all LEDs and wait for 2000ms
    PORTD = 0b00000000; 
    PORTB = 0b00000000;
    _delay_ms(2000);

    // Return to the beginning
  } 
  
  return 0; 
}
