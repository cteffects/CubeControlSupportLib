/*
 * fmc.h
 *
 *  Created on: Oct 24, 2018
 *      Author: Charles Tripe
 *      Flash Memory Controller Registers
 */

#ifndef FMC_H_
#define FMC_H_

#include "bitutils.h"

namespace CubeControl
{

namespace FMC
{

namespace Timing
{

enum Timing : unsigned int
{
    FLASHTIM_20_MHZ = 0x0,
    FLASHTIM_40_MHZ = 0x1,
    FLASHTIM_50_MHZ = 0x2
};

}
constexpr unsigned int baseAddress = 0x4003C000; // Flash-Access-Timing Register

constexpr unsigned int FLASHTIM_Offset = 0x010; // Flash-Access-Timing Register
constexpr unsigned int FMSSTART_Offset = 0x020; // Signature start address register
constexpr unsigned int FMSSTOP_Offset = 0x024; // Signature stop-address register
constexpr unsigned int FMSW0_Offset = 0x02C; // Word 0 [31:0]
constexpr unsigned int FMSW1_Offset = 0x030; // Word 1 [63:32]
constexpr unsigned int FMSW2_Offset = 0x034; // Word 2 [95:64]
constexpr unsigned int FMSW3_Offset = 0x038; // Word 3 [127:96]
constexpr unsigned int FMSTAT_Offset = 0xFE0; // Signature generation status register
constexpr unsigned int FMSTATCLR_Offset = 0xFE8; // Signature generation status clear register

constexpr volatile unsigned int& FLASHTIM()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + FLASHTIM_Offset);
}

static inline void Set_FLASHTIM(Timing::Timing timing)
{
    masked_write_bits_unsafe(FLASHTIM(), timing, 0b11);
}

constexpr volatile unsigned int& FMSSTART()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + FMSSTART_Offset);
}

constexpr volatile unsigned int& FMSSTOP()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + FMSSTOP_Offset);
}

constexpr volatile unsigned int& FMSW0()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + FMSW0_Offset);
}

constexpr volatile unsigned int& FMSW1()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + FMSW1_Offset);
}

constexpr volatile unsigned int& FMSW2()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + FMSW2_Offset);
}

constexpr volatile unsigned int& FMSW3()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + FMSW3_Offset);
}

constexpr volatile unsigned int& FMSTAT()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + FMSTAT_Offset);
}

constexpr volatile unsigned int& FMSTATCLR()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + FMSTATCLR_Offset);
}

}

} // CubeControl

#endif /* FMC_H_ */
