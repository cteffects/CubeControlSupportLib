/*
 * io.h
 *
 *  Created on: Oct 23, 2018
 *      Author: Charles Trippe
 *      An API implementation of the GPIO/IOCON/UART/SPI/I2C register map for the LPC1114

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

constexpr unsigned int baseAddress = 0x50000000;
constexpr unsigned int portSpacing = 0x10000;

constexpr unsigned int DIR_Offset = 0x8000;
constexpr unsigned int IS_Offset = 0x8004;
constexpr unsigned int IBE_Offset = 0x8008;
constexpr unsigned int IEV_Offset = 0x800C;
constexpr unsigned int IE_Offset = 0x8010;
constexpr unsigned int RIS_Offset = 0x8014;
constexpr unsigned int MIS_Offset = 0x8018;
constexpr unsigned int IC_Offset = 0x801C;


constexpr volatile unsigned int& CONSTEXPR_MASKED_DATA(unsigned int port, unsigned int bitmask)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + portSpacing * port + (bitmask << 2));
}

static inline volatile unsigned int& MASKED_DATA(unsigned int port, unsigned int bitmask)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + portSpacing * port + (bitmask << 2));
}

static inline volatile unsigned int& RAW_DATA(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + portSpacing * port + 0b11111111111100);
}

static inline volatile unsigned int& DIR(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + portSpacing * port + DIR_Offset);
}

static inline volatile unsigned int& IS(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + portSpacing * port + IS_Offset);
}

static inline volatile unsigned int& IBE(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + portSpacing * port + IBE_Offset);
}

static inline volatile unsigned int& IEV(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + portSpacing * port + IEV_Offset);
}

static inline volatile unsigned int& IE(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + portSpacing * port + IE_Offset);
}

static inline volatile unsigned int& RIS(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + portSpacing * port + RIS_Offset);
}

static inline volatile unsigned int& MIS(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + portSpacing * port + MIS_Offset);
}

static inline volatile unsigned int& IC(unsigned int port)
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + portSpacing * port + IC_Offset);
}

} // GPIO

namespace UART
{

constexpr unsigned int baseAddress = 0x40008000;

constexpr unsigned int U0RBR_Offset = 0x000; // Receiver Buffer Register
constexpr unsigned int U0THR_Offset = 0x000; // Transmit Holding Register
constexpr unsigned int U0DLL_Offset = 0x000; // Divisor Latch LSB
constexpr unsigned int U0DLM_Offset = 0x004; // Divisor Latch MSB
constexpr unsigned int U0IER_Offset = 0x004; // Interrupt Enable Register
constexpr unsigned int U0IIR_Offset = 0x008; // Interrupt ID Register
constexpr unsigned int U0FCR_Offset = 0x008; // FIFO Control Register
constexpr unsigned int U0LCR_Offset = 0x00C; // Line Control Register
constexpr unsigned int U0MCR_Offset = 0x010; // Modem control register
constexpr unsigned int U0LSR_Offset = 0x014; // Line Status Register
constexpr unsigned int U0MSR_Offset = 0x018; // Modem status register
constexpr unsigned int U0SCR_Offset = 0x01C; // Scratch Pad Register
constexpr unsigned int U0ACR_Offset = 0x020; // Auto-baud Control Register
constexpr unsigned int U0FDR_Offset = 0x028; // Fractional Divider Register
constexpr unsigned int U0TER_Offset = 0x030; // Transmit Enable Register
constexpr unsigned int U0RS485CTRL_Offset = 0x04C; // RS-485/EIA-485 Control
constexpr unsigned int U0RS485ADRMATCH_Offset = 0x050; // RS-485/EIA-485 address match
constexpr unsigned int U0RS485DLY_Offset = 0x054; // RS-485/EIA-485 direction control delay

constexpr volatile unsigned int& U0RBR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0RBR_Offset);
}

constexpr volatile unsigned int& U0THR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0THR_Offset);
}

constexpr volatile unsigned int& U0DLL()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0DLL_Offset);
}

constexpr volatile unsigned int& U0DLM()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0DLM_Offset);
}

constexpr volatile unsigned int& U0IER()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0IER_Offset);
}

constexpr volatile unsigned int& U0IIR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0IIR_Offset);
}

constexpr volatile unsigned int& U0FCR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0FCR_Offset);
}

constexpr volatile unsigned int& U0LCR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0LCR_Offset);
}

constexpr volatile unsigned int& U0MCR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0MCR_Offset);
}

constexpr volatile unsigned int& U0LSR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0LSR_Offset);
}

constexpr volatile unsigned int& U0MSR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0MSR_Offset);
}

constexpr volatile unsigned int& U0SCR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0SCR_Offset);
}

constexpr volatile unsigned int& U0ACR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0ACR_Offset);
}

constexpr volatile unsigned int& U0FDR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0FDR_Offset);
}

constexpr volatile unsigned int& U0TER()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0TER_Offset);
}

constexpr volatile unsigned int& U0RS485CTRL()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0RS485CTRL_Offset);
}

constexpr volatile unsigned int& U0RS485ADRMATCH()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0RS485ADRMATCH_Offset);
}

constexpr volatile unsigned int& U0RS485DLY()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + U0RS485DLY_Offset);
}

namespace SPI
{

constexpr unsigned int baseAddress = 0x40040000;
constexpr unsigned int portSpacing = 0x18000;

constexpr unsigned int CR0_Offset = 0x000; // Control Register 0
constexpr unsigned int CR1_Offset = 0x004; // Control Register 1
constexpr unsigned int DR_Offset = 0x008; // Data Register
constexpr unsigned int SR_Offset = 0x00C; // Status Register
constexpr unsigned int CPSR_Offset = 0x010; // Clock Prescale Register
constexpr unsigned int IMSC_Offset = 0x014; // Interrupt Mask Set and Clear Register
constexpr unsigned int RIS_Offset = 0x018; // Raw Interrupt Status Register
constexpr unsigned int MIS_Offset = 0x01C; // Masked Interrupt Status Register
constexpr unsigned int ICR_Offset = 0x020; // SSPICR Interrupt Clear Register

static inline volatile unsigned int& CR0(unsigned int port)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + portSpacing * port + CR0_Offset);
}

static inline volatile unsigned int& CR1(unsigned int port)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + portSpacing * port + CR1_Offset);
}

static inline volatile unsigned int& DR(unsigned int port)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + portSpacing * port + DR_Offset);
}

static inline volatile unsigned int& SR(unsigned int port)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + portSpacing * port + SR_Offset);
}

static inline volatile unsigned int& CPSR(unsigned int port)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + portSpacing * port + CPSR_Offset);
}

static inline volatile unsigned int& IMSC(unsigned int port)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + portSpacing * port + IMSC_Offset);
}

static inline volatile unsigned int& RIS(unsigned int port)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + portSpacing * port + RIS_Offset);
}

static inline volatile unsigned int& MIS(unsigned int port)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + portSpacing * port + MIS_Offset);
}

static inline volatile unsigned int& ICR(unsigned int port)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + portSpacing * port + ICR_Offset);
}

} // SPI0

namespace I2C
{

constexpr unsigned int baseAddress = 0x40000000;

constexpr unsigned int I2C0CONSET_Offset = 0x000; // I2C Control Set Register
constexpr unsigned int I2C0STAT_Offset = 0x004; // I2C Status Register
constexpr unsigned int I2C0DAT_Offset = 0x008; // I2C Data Register
constexpr unsigned int I2C0ADR0_Offset = 0x00C; // I2C Slave Address Register 0
constexpr unsigned int I2C0SCLH_Offset = 0x010; // SCH Duty Cycle Register High Half Word
constexpr unsigned int I2C0SCLL_Offset = 0x014; // SCL Duty Cycle Register Low Half Word
constexpr unsigned int I2C0CONCLR_Offset = 0x018; // I2C Control Clear Register
constexpr unsigned int I2C0MMCTRL_Offset = 0x01C; // Monitor mode control register
constexpr unsigned int I2C0ADR1_Offset = 0x020; // I2C Slave Address Register 1
constexpr unsigned int I2C0ADR2_Offset = 0x024; // I2C Slave Address Register 2
constexpr unsigned int I2C0ADR3_Offset = 0x028; // I2C Slave Address Register 3
constexpr unsigned int I2C0DATA_BUFFER_Offset = 0x02C; // Data buffer register
constexpr unsigned int I2C0MASK0_Offset = 0x030; // I2C Slave address mask register 0
constexpr unsigned int I2C0MASK1_Offset = 0x034; // I2C Slave address mask register 1
constexpr unsigned int I2C0MASK2_Offset = 0x038; // I2C Slave address mask register 2
constexpr unsigned int I2C0MASK3_Offset = 0x03C; // I2C Slave address mask register 3

constexpr volatile unsigned int& I2C0CONSET()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0CONSET_Offset);
}

constexpr volatile unsigned int& I2C0STAT()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0STAT_Offset);
}

constexpr volatile unsigned int& I2C0DAT()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0DAT_Offset);
}

constexpr volatile unsigned int& I2C0ADR0()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0ADR0_Offset);
}

constexpr volatile unsigned int& I2C0SCLH()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0SCLH_Offset);
}

constexpr volatile unsigned int& I2C0SCLL()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0SCLL_Offset);
}

constexpr volatile unsigned int& I2C0CONCLR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0CONCLR_Offset);
}

constexpr volatile unsigned int& I2C0MMCTRL()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0MMCTRL_Offset);
}

constexpr volatile unsigned int& I2C0ADR1()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0ADR1_Offset);
}

constexpr volatile unsigned int& I2C0ADR2()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0ADR2_Offset);
}

constexpr volatile unsigned int& I2C0ADR3()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0ADR3_Offset);
}

constexpr volatile unsigned int& I2C0DATA_BUFFER()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0DATA_BUFFER_Offset);
}

constexpr volatile unsigned int& I2C0MASK0()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0MASK0_Offset);
}

constexpr volatile unsigned int& I2C0MASK1()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0MASK1_Offset);
}

constexpr volatile unsigned int& I2C0MASK2()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0MASK2_Offset);
}

constexpr volatile unsigned int& I2C0MASK3()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + I2C0MASK3_Offset);
}

}

}

} // CubeControl

#endif /* IO_H_ */
