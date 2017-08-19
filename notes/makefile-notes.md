# Makefile Notes

I keep my templates in the /Makefile-templates folder

## Makefile-avrgirl template

Compiles, links with avr-gcc, flashes with AVRGIRL

(TODO: fuse actions still done via AVRDUDE, convert)

Uses scripts in avrgirl-flashtool directory, to use run `npm i` in that directory

## Makefile-legacy

Uses avr-gcc and AVRDUDE
