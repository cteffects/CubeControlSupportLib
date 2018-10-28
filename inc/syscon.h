/*
 * syscon.h
 *
 *  Created on: Oct 24, 2018
 *      Author: Charles
 *      An API implementation of the SYSCON register map for the LPC1114
 */

#ifndef SYSCON_H_
#define SYSCON_H_

#include "bitutils.h"

namespace CubeControl
{

namespace SYSCON
{

constexpr unsigned int baseAddress = 0x40048000;

constexpr unsigned int SYSMEMREMAP_Offset = 0x000; // System memory remap
constexpr unsigned int PRESETCTRL_Offset = 0x004; // Peripheral reset control
constexpr unsigned int SYSPLLCTRL_Offset = 0x008; // System PLL control
constexpr unsigned int SYSPLLSTAT_Offset = 0x00C; // System PLL status
constexpr unsigned int SYSOSCCTRL_Offset = 0x020; // System oscillator control
constexpr unsigned int WDTOSCCTRL_Offset = 0x024; // Watchdog oscillator control
constexpr unsigned int IRCCTRL_Offset = 0x028; // IRC control
constexpr unsigned int SYSRSTSTAT_Offset = 0x030; // System reset status register
constexpr unsigned int SYSPLLCLKSEL_Offset = 0x040; // System PLL clock source select
constexpr unsigned int SYSPLLCLKUEN_Offset = 0x044; // System PLL clock source update enable
constexpr unsigned int MAINCLKSEL_Offset = 0x070; // Main clock source select
constexpr unsigned int MAINCLKUEN_Offset = 0x074; // Main clock source update enable
constexpr unsigned int SYSAHBCLKDIV_Offset = 0x078; // System AHB clock divider
constexpr unsigned int SYSAHBCLKCTRL_Offset = 0x080; // System AHB clock control
constexpr unsigned int SSP0CLKDIV_Offset = 0x094; // SPI0 clock divider
constexpr unsigned int UARTCLKDIV_Offset = 0x098; // UART clock divider
constexpr unsigned int SSP1CLKDIV_Offset = 0x09C; // SPI1 clock divider
constexpr unsigned int WDTCLKSEL_Offset = 0x0D0; // WDT clock source select
constexpr unsigned int WDTCLKUEN_Offset = 0x0D4; // WDT clock source update enable
constexpr unsigned int WDTCLKDIV_Offset = 0x0D8; // WDT clock divider
constexpr unsigned int CLKOUTCLKSEL_Offset = 0x0E0; // CLKOUT clock source select
constexpr unsigned int CLKOUTUEN_Offset = 0x0E4; // CLKOUT clock source update enable
constexpr unsigned int CLKOUTCLKDIV_Offset = 0x0E8; // CLKOUT clock divider
constexpr unsigned int PIOPORCAP0_Offset = 0x100; // POR captured PIO status 0
constexpr unsigned int PIOPORCAP1_Offset = 0x104; // POR captured PIO status 1
constexpr unsigned int BODCTRL_Offset = 0x150; // BOD control
constexpr unsigned int SYSTCKCAL_Offset = 0x154; // System tick counter calibration
constexpr unsigned int IRQLATENCY_Offset = 0x170; // IRQ delay. Allows trade-off between interrupt latency and determinism.
constexpr unsigned int NMISRC_Offset = 0x174; // NMI source selection
constexpr unsigned int STARTAPRP0_Offset = 0x200; // Start logic edge control register
constexpr unsigned int STARTERP0_Offset = 0x204; // Start logic signal enable register
constexpr unsigned int STARTRSRP0CLR_Offset = 0x208; // Start logic reset register
constexpr unsigned int STARTSRP0_Offset = 0x20C; // Start logic status register
constexpr unsigned int PDSLEEPCFG_Offset = 0x230; // Power-down states in Deep-sleep mode
constexpr unsigned int PDAWAKECFG_Offset = 0x234; // Power-down states after wake-up from deep sleep mode
constexpr unsigned int PDRUNCFG_Offset = 0x238; // Power-down configuration register
constexpr unsigned int DEVICE_ID_Offset = 0x3F4; // Device ID register 0 for parts LPC1100,

constexpr volatile unsigned int& SYSMEMREMAP()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SYSMEMREMAP_Offset);
}

constexpr volatile unsigned int& PRESETCTRL()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PRESETCTRL_Offset);
}

constexpr volatile unsigned int& SYSPLLCTRL()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SYSPLLCTRL_Offset);
}

constexpr volatile unsigned int& SYSPLLSTAT()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SYSPLLSTAT_Offset);
}

constexpr volatile unsigned int& SYSOSCCTRL()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SYSOSCCTRL_Offset);
}

constexpr volatile unsigned int& WDTOSCCTRL()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + WDTOSCCTRL_Offset);
}

constexpr volatile unsigned int& IRCCTRL()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + IRCCTRL_Offset);
}

constexpr volatile unsigned int& SYSRSTSTAT()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SYSRSTSTAT_Offset);
}

constexpr volatile unsigned int& SYSPLLCLKSEL()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SYSPLLCLKSEL_Offset);
}

constexpr volatile unsigned int& SYSPLLCLKUEN()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SYSPLLCLKUEN_Offset);
}

constexpr volatile unsigned int& MAINCLKSEL()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + MAINCLKSEL_Offset);
}

constexpr volatile unsigned int& MAINCLKUEN()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + MAINCLKUEN_Offset);
}

constexpr volatile unsigned int& SYSAHBCLKDIV()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SYSAHBCLKDIV_Offset);
}

constexpr volatile unsigned int& SYSAHBCLKCTRL()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SYSAHBCLKCTRL_Offset);
}

constexpr volatile unsigned int& SSP0CLKDIV()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SSP0CLKDIV_Offset);
}

constexpr volatile unsigned int& UARTCLKDIV()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + UARTCLKDIV_Offset);
}

constexpr volatile unsigned int& SSP1CLKDIV()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SSP1CLKDIV_Offset);
}

constexpr volatile unsigned int& WDTCLKSEL()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + WDTCLKSEL_Offset);
}

constexpr volatile unsigned int& WDTCLKUEN()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + WDTCLKUEN_Offset);
}

constexpr volatile unsigned int& WDTCLKDIV()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + WDTCLKDIV_Offset);
}

constexpr volatile unsigned int& CLKOUTCLKSEL()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + CLKOUTCLKSEL_Offset);
}

constexpr volatile unsigned int& CLKOUTUEN()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + CLKOUTUEN_Offset);
}

constexpr volatile unsigned int& CLKOUTCLKDIV()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + CLKOUTCLKDIV_Offset);
}

constexpr volatile unsigned int& PIOPORCAP0()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIOPORCAP0_Offset);
}

constexpr volatile unsigned int& PIOPORCAP1()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PIOPORCAP1_Offset);
}

constexpr volatile unsigned int& BODCTRL()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + BODCTRL_Offset);
}

constexpr volatile unsigned int& SYSTCKCAL()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + SYSTCKCAL_Offset);
}

constexpr volatile unsigned int& IRQLATENCY()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + IRQLATENCY_Offset);
}

constexpr volatile unsigned int& NMISRC()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + NMISRC_Offset);
}

constexpr volatile unsigned int& STARTAPRP0()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + STARTAPRP0_Offset);
}

constexpr volatile unsigned int& STARTERP0()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + STARTERP0_Offset);
}

constexpr volatile unsigned int& STARTRSRP0CLR()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + STARTRSRP0CLR_Offset);
}

constexpr volatile unsigned int& STARTSRP0()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + STARTSRP0_Offset);
}

constexpr volatile unsigned int& PDSLEEPCFG()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PDSLEEPCFG_Offset);
}

constexpr volatile unsigned int& PDAWAKECFG() // Relevant functions in namespace POWER
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PDAWAKECFG_Offset);
}

constexpr volatile unsigned int& PDRUNCFG() // Relevant functions in namespace POWER
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + PDRUNCFG_Offset);
}

constexpr volatile unsigned int& DEVICE_ID()
{
    return *reinterpret_cast<volatile unsigned int*>(baseAddress + DEVICE_ID_Offset);
}

namespace POWERCFG
{

enum DEVICE_POWER_MASK : unsigned int
{
    IRCOUT_PD = 1,
    IRC_PD = 1 << 1,
    FLASH_PD = 1 << 2,
    BOD_PD = 1 << 3,
    ADC_PD = 1 << 4,
    SYSOSC_PD = 1 << 5,
    WDTOSC_PD = 1 << 6,
    SYSPLL_PD = 1 << 7
};

constexpr int POWER_CFG_RESERVED_WRITE_BITS = 0xED00;

static inline void powerUp(DEVICE_POWER_MASK devicePowerMask)
{
    unsigned int pdruncfg = PDRUNCFG() & 0xFF;
    pdruncfg &= ~(devicePowerMask & 0xFF);
    PDRUNCFG() = (pdruncfg | POWER_CFG_RESERVED_WRITE_BITS);
}

static inline void powerDown(DEVICE_POWER_MASK devicePowerMask)
{
    unsigned int pdruncfg = PDRUNCFG() & 0xFF;
    pdruncfg |= (devicePowerMask & 0xFF);
    PDRUNCFG() = (pdruncfg | POWER_CFG_RESERVED_WRITE_BITS);
}

static inline void setPowerUpOnDeepWakeUp(DEVICE_POWER_MASK devicePowerMask)
{
    unsigned int pdawakecfg = PDAWAKECFG() & 0xFF;
    pdawakecfg &= ~(devicePowerMask & 0xFF);
    PDRUNCFG() = (pdawakecfg | POWER_CFG_RESERVED_WRITE_BITS);
}

static inline void setPowerDownOnDeepWakeUp(DEVICE_POWER_MASK devicePowerMask)
{
    unsigned int pdawakecfg = PDAWAKECFG() & 0xFF;
    pdawakecfg |= (devicePowerMask & 0xFF);
    PDAWAKECFG() = (pdawakecfg | POWER_CFG_RESERVED_WRITE_BITS);
}

} // POWER

namespace CLOCKCFG
{

enum DEVICE_CLOCK_MASK : unsigned int
{
    SYS = 1,
    ROM = 1 << 1,
    RAM = 1 << 2,
    FLASHREG = 1 << 3,
    FLASHARRAY = 1 << 4,
    I2C = 1 << 5,
    GPIO = 1 << 6,
    CT16B0 = 1 << 7,
    CT16B1 = 1 << 8,
    CT32B0 = 1 << 9,
    CT32B1 = 1 << 10,
    SPI_SSP0 = 1 << 11,
    UART = 1 << 12,
    ADC = 1 << 13,
    WDT = 1 << 15,
    IOCON = 1 << 16,
    CAN = 1 << 17,
    SSP1 = 1 << 18
};

static inline void enableClock(DEVICE_CLOCK_MASK deviceClockMask)
{
    SYSAHBCLKCTRL() |= deviceClockMask;
}

static inline void disableClock(DEVICE_CLOCK_MASK deviceClockMask)
{
    SYSAHBCLKCTRL() &= ~deviceClockMask;
}

} // CLOCKCFG

} // SYSCON

} // CubeControl

#endif /* SYSCON_H_ */
