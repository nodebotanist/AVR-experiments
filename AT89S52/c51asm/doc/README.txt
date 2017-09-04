=====================================================================
=       Atmel C51ASM Macro Assembler (V1.2 31 -  MAY     2011)      =
=====================================================================

*Important Notice - Please read carefully

By using this software you agree to abide by the "Terms and Conditions
of Sale" located on the Atmel website: http://www.atmel.com

Atmel is a registered trademark of Atmel Corporation. Other terms and
product names may be trademarks of others.

The Mac OS X version of C51ASM will only run on a Macintosh with an
Intel processor.

---------------------------------------------------------------------
Package Description
---------------------------------------------------------------------
The Atmel C51ASM software is a two-pass macro assembler for the 
MCS-51 assembly language with specific support for the Atmel AT89LP
Family of 8051 microcontrollers.

Download:
--------

The latest version of C51ASM is always available from 

 	http://www.atmel.com

Distribution Structure:
----------------------

C51ASM is available as a zipped archive with the following structure.

c51asm/
 |
 +-> bin/
 |    |
 |    +-> c51asm	: the C51ASM executable
 |    
 +-> doc/
 |    |
 |    +-> c51asm.1	: Unix MAN page for C51ASM
 |    +-> changes.txt	: version history
 |    +-> doc3710_C51ASM.pdf
 |    |			: C51ASM User Guide
 |    +-> install.txt	: installation instructions for Linux
 |    +-> license.txt	: C51ASM user license
 |    
 +-> include/
      |
      +-> *.inc		: device-specific header files

---------------------------------------------------------------------
Installation
---------------------------------------------------------------------

This is a quick install guide, please see install.txt under doc/ for
more information:

1. Extract the c51asm_macosx_1-2.zip file to the desired installation
   directory:

	> unzip c51asm_macosx_1-2.zip -d <install-dir>

2. Set your PATH variable to include the bin/ directory:

	> export PATH=${PATH}:<install-dir>/c51asm/bin

3. Set the C51ASMINC variable to point to include/ directory:

	> export C51ASMINC=<install-dir>/c51asm/include

---------------------------------------------------------------------
Usage
---------------------------------------------------------------------

Simply type c51asm followed by the source file to assemble:

	> c51asm <source>

To generate a listing file, type:

	> c51asm <source> -l

If c51asm is not in your path, you will need to type the full path to 
the executable:

	> <install-dir>/c51asm/bin/c51asm <source>

For more information see the C51ASM man page:

	> man <install-dir>/c51asm/doc/c51asm.1

or the C51ASM User Guide (requires Adobe Acrobat Reader or another PDF
viewer):

	> acroread <install-dir>/c51asm/doc/doc3710_C51ASM.pdf

Note that C51ASM for Max OS X follows the same conventions as the 
Linux version. 

---------------------------------------------------------------------
Bugs
---------------------------------------------------------------------

Please report any bugs to 8051@atmel.com and include C51ASM in the 
subject line.
