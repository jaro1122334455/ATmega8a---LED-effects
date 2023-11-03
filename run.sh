rm main.elf
rm main.hex


avr-gcc main.c -o main.elf
avr-objcopy main.elf -O ihex main.hex
avrdude -c usbasp -p m8a -U flash:w:"main.hex":a