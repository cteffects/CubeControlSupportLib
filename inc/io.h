/*
 * io.h
 *
 *  Created on: Oct 23, 2018
 *      Author: Charles Trippe
 Register locations for the LPC11XX chip's I/O functions + I/O Controller

 Addresses Transcribed from the NXP LPC11XX User Manual
 https://www.nxp.com/docs/en/user-guide/UM10398.pdf
 */

#ifndef IO_H_
#define IO_H_

namespace CubeControl
{

namespace IOCON
{

constexpr unsigned int baseAddress = 0x40044000;

constexpr unsigned int RESET_PIO0_0_Offset = 0x00C; // I/O configuration for pin RESET/PIO0_0
constexpr unsigned int PIO0_1_Offset = 0x010; // I/O configuration for pin PIO0_1
constexpr unsigned int PIO0_2_Offset = 0x01C; // I/O configuration for pin PIO0_2
constexpr unsigned int PIO0_3_Offset = 0x02C; // I/O configuration for pin PIO0_3
constexpr unsigned int PIO0_4_Offset = 0x030; // I/O configuration for pin PIO0_4/SCL
constexpr unsigned int PIO0_5_Offset = 0x034; // I/O configuration for pin PIO0_5/SDA
constexpr unsigned int PIO0_6_Offset = 0x04C; // I/O configuration for pin PIO0_6/SCK0
constexpr unsigned int PIO0_7_Offset = 0x050; // I/O configuration for pin PIO0_7/CTS
constexpr unsigned int PIO0_8_Offset = 0x060; // I/O configuration for pin PIO0_8
constexpr unsigned int PIO0_9_Offset = 0x064; // I/O configuration for pin PIO0_9
constexpr unsigned int SWCLK_PIO0_10_Offset = 0x068; // I/O configuration for pin PIO0_10
constexpr unsigned int R_PIO0_11_Offset = 0x074; // I/O configuration for pin R_PIO0_11
constexpr unsigned int PIO1_8_Offset = 0x014; // I/O configuration for pin PIO1_8
constexpr unsigned int PIO1_9_Offset = 0x038; // I/O configuration for pin PIO1_9
constexpr unsigned int PIO1_10_Offset = 0x06C; // I/O configuration for pin PIO1_10
constexpr unsigned int R_PIO1_0_Offset = 0x078; // I/O configuration for pin R_PIO1_0
constexpr unsigned int R_PIO1_1_Offset = 0x07C; // I/O configuration for pin R_PIO1_1
constexpr unsigned int R_PIO1_2_Offset = 0x080; // I/O configuration for pin R_PIO1_2
constexpr unsigned int SWDIO_PIO1_3_Offset = 0x090; // I/O configuration for pin SWDIO_PIO1_3
constexpr unsigned int PIO1_4_Offset = 0x094; // I/O configuration for pin PIO1_4
constexpr unsigned int PIO1_11_Offset = 0x098; // I/O configuration for pin PIO1_11/AD7
constexpr unsigned int PIO1_5_Offset = 0x0A0; // I/O configuration for pin PIO1_5
constexpr unsigned int PIO1_6_Offset = 0x0A4; // I/O configuration for pin PIO1_6
constexpr unsigned int PIO1_7_Offset = 0x0A8; // I/O configuration for pin PIO1_7
constexpr unsigned int PIO2_6_Offset = 0x000; // I/O configuration for pin PIO2_6
constexpr unsigned int PIO2_0_Offset = 0x008; // I/O configuration for pin PIO2_60
constexpr unsigned int PIO2_7_Offset = 0x020; // I/O configuration for pin PIO2_7
constexpr unsigned int PIO2_8_Offset = 0x024; // I/O configuration for pin PIO2_8
constexpr unsigned int PIO2_1_Offset = 0x028; // I/O configuration for pin PIO2_1
constexpr unsigned int PIO2_4_Offset = 0x040; // I/O configuration for pin PIO2_4
constexpr unsigned int PIO2_5_Offset = 0x044; // I/O configuration for pin PIO2_5
constexpr unsigned int PIO2_9_Offset = 0x054; // I/O configuration for pin PIO2_9
constexpr unsigned int PIO2_10_Offset = 0x058; // I/O configuration for pin PIO2_10
constexpr unsigned int PIO2_2_Offset = 0x05C; // I/O configuration for pin PIO2_2
constexpr unsigned int PIO2_11_Offset = 0x070; // I/O configuration for pin PIO2_11/SCK0
constexpr unsigned int PIO2_3_Offset = 0x08C; // I/O configuration for pin PIO2_3
constexpr unsigned int PIO3_4_Offset = 0x03C; // I/O configuration for pin PIO3_4
constexpr unsigned int PIO3_5_Offset = 0x048; // I/O configuration for pin PIO3_5
constexpr unsigned int PIO3_0_Offset = 0x084; // I/O configuration for pin PIO3_0/DTR
constexpr unsigned int PIO3_1_Offset = 0x088; // I/O configuration for pin PIO3_1/DSR
constexpr unsigned int PIO3_2_Offset = 0x09C; // I/O configuration for pin PIO3_2/DCD
constexpr unsigned int PIO3_3_Offset = 0x0AC; // I/O configuration for pin PIO3_3/RI
constexpr unsigned int SCK_LOC_Offset = 0x0B0; // SCK pin location select register
constexpr unsigned int DSR_LOC_Offset = 0x0B4; // DSR pin location select register
constexpr unsigned int DCD_LOC_Offset = 0x0B8; // DCD pin location select register
constexpr unsigned int RI_LOC_Offset = 0x0BC; // RI pin location register

constexpr volatile unsigned int& RESET_PIO0_0()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + RESET_PIO0_0_Offset);
}

constexpr volatile unsigned int& PIO0_1()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO0_1_Offset);
}

constexpr volatile unsigned int& PIO0_2()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO0_2_Offset);
}

constexpr volatile unsigned int& PIO0_3()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO0_3_Offset);
}

constexpr volatile unsigned int& PIO0_4()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO0_4_Offset);
}

constexpr volatile unsigned int& PIO0_5()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO0_5_Offset);
}

constexpr volatile unsigned int& PIO0_6()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO0_6_Offset);
}

constexpr volatile unsigned int& PIO0_7()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO0_7_Offset);
}

constexpr volatile unsigned int& PIO0_8()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO0_8_Offset);
}

constexpr volatile unsigned int& PIO0_9()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO0_9_Offset);
}

constexpr volatile unsigned int& SWCLK_PIO0_10()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SWCLK_PIO0_10_Offset);
}

constexpr volatile unsigned int& R_PIO0_11()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + R_PIO0_11_Offset);
}

constexpr volatile unsigned int& PIO1_8()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO1_8_Offset);
}

constexpr volatile unsigned int& PIO1_9()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO1_9_Offset);
}

constexpr volatile unsigned int& PIO1_10()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO1_10_Offset);
}

constexpr volatile unsigned int& R_PIO1_0()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + R_PIO1_0_Offset);
}

constexpr volatile unsigned int& R_PIO1_1()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + R_PIO1_1_Offset);
}

constexpr volatile unsigned int& R_PIO1_2()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + R_PIO1_2_Offset);
}

constexpr volatile unsigned int& SWDIO_PIO1_3()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SWDIO_PIO1_3_Offset);
}

constexpr volatile unsigned int& PIO1_4()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO1_4_Offset);
}

constexpr volatile unsigned int& PIO1_11()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO1_11_Offset);
}

constexpr volatile unsigned int& PIO1_5()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO1_5_Offset);
}

constexpr volatile unsigned int& PIO1_6()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO1_6_Offset);
}

constexpr volatile unsigned int& PIO1_7()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO1_7_Offset);
}

constexpr volatile unsigned int& PIO2_6()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO2_6_Offset);
}

constexpr volatile unsigned int& PIO2_0()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO2_0_Offset);
}

constexpr volatile unsigned int& PIO2_7()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO2_7_Offset);
}

constexpr volatile unsigned int& PIO2_8()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO2_8_Offset);
}

constexpr volatile unsigned int& PIO2_1()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO2_1_Offset);
}

constexpr volatile unsigned int& PIO2_4()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO2_4_Offset);
}

constexpr volatile unsigned int& PIO2_5()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO2_5_Offset);
}

constexpr volatile unsigned int& PIO2_9()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO2_9_Offset);
}

constexpr volatile unsigned int& PIO2_10()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO2_10_Offset);
}

constexpr volatile unsigned int& PIO2_2()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO2_2_Offset);
}

constexpr volatile unsigned int& PIO2_11()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO2_11_Offset);
}

constexpr volatile unsigned int& PIO2_3()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO2_3_Offset);
}

constexpr volatile unsigned int& PIO3_4()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO3_4_Offset);
}

constexpr volatile unsigned int& PIO3_5()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO3_5_Offset);
}

constexpr volatile unsigned int& PIO3_0()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO3_0_Offset);
}

constexpr volatile unsigned int& PIO3_1()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO3_1_Offset);
}

constexpr volatile unsigned int& PIO3_2()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO3_2_Offset);
}

constexpr volatile unsigned int& PIO3_3()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIO3_3_Offset);
}

constexpr volatile unsigned int& SCK_LOC()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SCK_LOC_Offset);
}

constexpr volatile unsigned int& DSR_LOC()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + DSR_LOC_Offset);
}

constexpr volatile unsigned int& DCD_LOC()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + DCD_LOC_Offset);
}

constexpr volatile unsigned int& RI_LOC()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + RI_LOC_Offset);
}

} // IOCON

namespace GPIO
{

constexpr unsigned int DIR_Offset = 0x8000;
constexpr unsigned int IS_Offset = 0x8004;
constexpr unsigned int IBE_Offset = 0x8008;
constexpr unsigned int IEV_Offset = 0x800C;
constexpr unsigned int IE_Offset = 0x8010;
constexpr unsigned int RIS_Offset = 0x8014;
constexpr unsigned int MIS_Offset = 0x8018;
constexpr unsigned int IC_Offset = 0x801C;
constexpr unsigned int PORT_Spacing = 0x10000;
constexpr unsigned int baseAddress = 0x50000000;

constexpr volatile unsigned int& CONSTEXPR_MASKED_DATA(unsigned int port, unsigned int bitmask)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PORT_Spacing * port + (bitmask << 2));
}

static inline volatile unsigned int& MASKED_DATA(unsigned int port, unsigned int bitmask)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PORT_Spacing * port + (bitmask << 2));
}

constexpr volatile unsigned int& RAW_DATA(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PORT_Spacing * port + 0b11111111111100);
}

constexpr volatile unsigned int& DIR(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PORT_Spacing * port + DIR_Offset);
}

constexpr volatile unsigned int& IS(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PORT_Spacing * port + IS_Offset);
}

constexpr volatile unsigned int& IBE(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PORT_Spacing * port + IBE_Offset);
}

constexpr volatile unsigned int& IEV(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PORT_Spacing * port + IEV_Offset);
}

constexpr volatile unsigned int& IE(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PORT_Spacing * port + IE_Offset);
}

constexpr volatile unsigned int& RIS(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PORT_Spacing * port + RIS_Offset);
}

constexpr volatile unsigned int& MIS(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PORT_Spacing * port + MIS_Offset);
}

constexpr volatile unsigned int& IC(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PORT_Spacing * port + IC_Offset);
}

} // GPIO

} // CubeControl

#endif /* IO_H_ */
