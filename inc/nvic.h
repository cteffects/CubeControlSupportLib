/*
 * nvic.h
 *
 *  Created on: Oct 24, 2018
 *      Author: Charles Trippe
 *      An API implementation of the NVIC register map for the LPC1114
 */

#ifndef NVIC_H_
#define NVIC_H_

#include "bitutils.h"

namespace CubeControl
{

namespace NVIC
{

enum IRQ : unsigned int
{
    PIO0_0 = 0,
    PIO0_1 = 1,
    PIO0_2 = 2,
    PIO0_3 = 3,
    PIO0_4 = 4,
    PIO0_5 = 5,
    PIO0_6 = 6,
    PIO0_7 = 7,
    PIO0_8 = 8,
    PIO0_9 = 9,
    PIO0_10 = 10,
    PIO0_11 = 11,
    PIO1_0 = 12,
    C_CAN = 13,
    SPI_SSP1 = 14,
    I2C = 15,
    CT16B0 = 16,
    CT16B1 = 17,
    CT32B0 = 18,
    CT32B1 = 19,
    SPI_SSP0 = 20,
    UART = 21,
    ADC = 24,
    WDT = 25,
    BOD = 26, // Brown-out-detect
    PIO_3 = 28,
    PIO_2 = 29,
    PIO_1 = 30,
    PIO_0 = 31
};

enum InterruptPriority : unsigned int
{
    PRIORITY_0 = 0, // first priority
    PRIORITY_1 = 1,
    PRIORITY_2 = 2,
    PRIORITY_3 = 3  // last priority
};

constexpr unsigned int ISER_Offset = 0xE000E100; // Interrupt Set-Enable Register
constexpr unsigned int ICER_Offset = 0xE000E180; // Interrupt Clear-Enable Register
constexpr unsigned int ISPR_Offset = 0xE000E200; // Interrupt Set-Pending Register
constexpr unsigned int ICPR_Offset = 0xE000E280; // Interrupt Clear-Pending Register
constexpr unsigned int IPR0_Offset = 0xE000E400; // Interrupt Priority Register 0

constexpr unsigned int IPR_Spacing = 0x4; // Interrupt Priority Register 0 address spacing
constexpr unsigned int NVIC_BITS = 2; // Interrupt Priority Register 0 address spacing

constexpr volatile unsigned int& ISER()
{
    return *reinterpret_cast<volatile unsigned int*>(ISER_Offset);
}

constexpr volatile unsigned int& ICER()
{
    return *reinterpret_cast<volatile unsigned int*>(ICER_Offset);
}

constexpr volatile unsigned int& ISPR()
{
    return *reinterpret_cast<volatile unsigned int*>(ISPR_Offset);
}

constexpr volatile unsigned int& ICPR()
{
    return *reinterpret_cast<volatile unsigned int*>(ICPR_Offset);
}

static inline volatile unsigned int& IPR(unsigned int registerNum)
{
    return *reinterpret_cast<volatile unsigned int*>(IPR0_Offset + IPR_Spacing * registerNum);
}

static inline void EnableIRQ(IRQ IRQnum)
{
    ISER() = (1 << IRQnum);
}

static inline void DisableIRQ(IRQ IRQnum)
{
    ICER() = (1 << IRQnum);
}

static inline void SetPendingIRQ(IRQ IRQnum)
{
    ISPR() = (1 << IRQnum);
}

static inline void ClearPendingIRQ(IRQ IRQnum)
{
    ICPR() = (1 << IRQnum);
}

static inline unsigned int GetPendingIRQ(IRQ IRQnum)
{
    return (ICPR() >> IRQnum) & 1;
}

static inline void SetPriority(IRQ IRQnum, InterruptPriority priority)
{
    masked_write_bits_unsafe(
            IPR(IRQnum >> 2), // the register to modify
            (priority << (8 - NVIC_BITS)) << ((IRQnum & 0b11) * 8), // the bits to add
            (0b11 << (8 - NVIC_BITS)) << ((IRQnum & 0b11) * 8)); // the bits to mask
}

static inline unsigned int GetPriority(IRQ IRQnum)
{
    return ((IPR(IRQnum >> 2) >> ((IRQnum & 0b11) * 8))) & 0b11;
}

} //NVIC

} //CubeControl

#endif /* NVIC_H_ */
