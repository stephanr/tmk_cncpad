# CNC - Keypad
This keypad uses the TMK keyboard firmware from https://github.com/tmk/tmk_keyboard

## Build Instructions

 1. Check out TMK firmware or unzip into subfolder 
    * `unzip  https://github.com/tmk/tmk_keyboard/archive/v2.9.zip into tmk`
    * or: `clone https://github.com/tmk/tmk_keyboard.git tmk`
 2. Change into cncpad folder
 3. Run make to compile firmware
    * requires avr gcc compiler to be installed
    * on ubuntu this can be achieved by installing `gcc-avr` and `avr-libc`
 4. flash code into by avr
    * as i am using a linux vm to compile and a windows box for flashing i am using avrdude
      `avrdude -Cavrdude.conf -v -patmega32u4 -cavr109 -PCOM3 -b57600 -D -Uflash:w:cncpad_lufa.hex:i `

## License
Because this code is derrived from tmk examples the same license is used.
**GPLv2** or later. Some tmk firmware protocol files are under **Modified BSD License**.

Third party libraries like LUFA, PJRC and V-USB have their own license respectively.
