# CNC - Keypad
This keypad uses the TMK keyboard firmware from https://github.com/tmk/tmk_keyboard

Used Hardware:
  * Numeric Keypad, Jelly Comb [From Amazon.de](https://www.amazon.de/Jelly-Comb-Zifferntastatur-Ziffernblock-Finanzbuchhaltung/dp/B01EFR5KDA/)
  * Pro Micro - 5V/16MHz (Clone)
    * [Original from SparkFun](https://www.sparkfun.com/products/12640)

Modifications:
  * removed original non programmable keyboard controller from keypad
  * removed every resitor and capacitor which is not related to the matrix or numled
  * added 1N4148 diodes to switches for N-Key rollover
  * connected rows, cols and numled (with original resistor) to the promicro

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

## Keymap
```
+---------+---------+---------+---------+
| Del     | Ins     | F9      | F4      |
+---------+---------+---------+---------+
| NumLk   | Shift-X | Shift-Y | Shift-Z |
+---------+---------+---------+---------+
| KP_7    | KP_8    | KP_9    | Minus   |
+---------+---------+---------+---------+
| KP_4    |         | KP_6    | Plus    |
+---------+---------+---------+---------+
| KP_1    | KP_2    | KP_3    |         |
+---------+---------+---------+ ESC     +
|       Strg        | F3      |         |
+-------------------+---------+---------+
```

Keyboard Shortcuts in WinPC NC
```
Del. = 4-axis -/left
Ins. = 4-axis +/fight
F3   = start job
F4   = go to XY Zero
F5   = drive manually
F9   = go to parking position
-    = move z-axis up
+    = move z-axis down
ESC  = stop current operation
Strg = faste move with 1-4/6-9

```

## License
Because this code is derrived from tmk examples the same license is used.
**GPLv2** or later. Some tmk firmware protocol files are under **Modified BSD License**.

Third party libraries like LUFA, PJRC and V-USB have their own license respectively.
