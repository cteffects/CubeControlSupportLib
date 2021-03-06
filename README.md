# CubeControlSupportLib
A C++17 support library for the LPC1114 microcontroller and auxiliary Cube Controller board functions.

This library implements the registers and register functions of several of the core and perihperal blocks in the LPC1114 Microcontroller, and implements several convenience functions for interacting with the external board peripherals.

It is far from complete and only implements the functionality I am using in the CubeControl LED Cube Control Board as I develop it.

Does not depend LPCOpen or CMSIS


Currently contains abstractions for the following:

ADC (adc.h) - Analog-to-Digital Converter (just registers exposed so far)

NVIC (nvic.h) - Nested Vectored Interrupt Controller (all basic functionality should exist)

GPIO/SPI/UART/I2C (io.h) - I/O Peripheral Blocks (all registers exposed, has functionality for hardware-masked reads and writes on GPIO)

IOCON (io.h) - I/O Control Block (all registers exposed, no convenience functions or enums yet)

SYSCON (syscon.h) - System Configuration Block (all registers exposed, some power and clock control functions)

FMC (fmc.h) - Flash Memory Control Block (all registers exposed, only convenience function for safely changing flash timings so far)

Timers (timer.h) - 16/32-bit General Purpose Timers, Watchdog Timers, and SysTick Timers (just registers exposed so far)

