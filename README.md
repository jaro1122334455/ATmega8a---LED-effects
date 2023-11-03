# Atmega8A - LED effects

Trying to configure VSCode to work with AVR microcontrolers and create some visual effects.

## Configuration

To work we need:
- Hardware
  - one of AVR microcontroler (e.g. ATmega8), 
  - usbasp programmer, 
  - breadbord and wires,
  - LEDs and resistors.
  
- Software
  - avrdude,
  - AVR-GCC compiler,
  - AVR Libc.

    Instalation for Fedora:

    ```Bash
    sudo dnf install avr-gcc avr-libc avrdude
    ```

Connect everything like on the picture:

![Alt breadboard](images/atmega_connections.jpg)


## Launching program

If everything is connected corectly and all software stuff are installed you only need to run script.

```Bash

sh run.sh
```