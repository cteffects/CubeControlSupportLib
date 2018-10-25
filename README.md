# CubeControlSupportLib
A C++17 support library for the LPC1114 microcontroller and auxiliary Cube Controller board functions.

This library implements the registers and register functions of several of the core and perihperal blocks in the LPC1114 Microcontroller, and implements several convenience functions for interacting with the external board peripherals.

It is far from complete and only implements the functionality I am using in the CubeControl LED Cube Control Board as I develop it, but will be expanded more over time.

Does not depend LPCOpen or CMSIS


Currently contains abstractions for the following:

NVIC (nvic.h) - Nested Vectored Interrupt Controller (all basic functionality should exist)

GPIO (io.h) - General Purpose I/O (all registers exposed, added functionality for hardware-masked reads and writes)

IOCON (io.h) - I/O Controller Block (all registers exposed, no convenience functions or enums yet)

SYSCON (syscon.h) - System Controller Block (all registers exposed, no convenience functions or enums yet)

FMC (fmc.h)
