# CMPE453 Embedded Systems

## Lab 1 - Blinking an LED with Predefined Delays

[!NOTE]
[AVR Programming Library](https://github.com/hexagon5un/AVR-Programming/tree/master/AVR-Programming-Library) must be 
downloaded and added to the Arduino IDE to compile the code. Library can be added by going to 
Sketch -> Include Library -> Add .ZIP Library and selecting the downloaded library.

[!NOTE]
[This documentation](https://docs.arduino.cc/retired/hacking/software/PortManipulation/) has been used to understand which ports corespond to which pins on the Arduino Uno board when programming with C.

1.  Set up the following circuit with breadboard, Arduino-uno, resistor (1K), Led and 
jumpers.

![Figure 1 - Circuit](https://github.com/fsaltunyuva/CMPE453-Lab1-BlinkingLEDWithDelays/blob/main/README%20Figures/Figure%201.png)

2. Program the microcontroller by using the 3rd, 6th and 9th pins of Arduino board and 
writing code on Arduino IDE. Provide the connection between your computer and 
Arduino board. When your program runs, it should follow the following cycle:

    1. ON the all LEDs together and wait for 3000ms 
    2. OFF the red and yellow LEDs and ON the blue LED together and wait for 4000ms 
    3. OFF the blue LED and ON the yellow and red LEDs together and wait for 5000ms 
    4. OFF the all LEDs and wait for 2000ms 
    5. Return to the beginning