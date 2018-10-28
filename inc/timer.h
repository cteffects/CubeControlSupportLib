/*
 * timer.h
 *
 *  Created on: Oct 27, 2018
 *      Author: Charles Trippe
 *
 *      An API implementation of the timer register maps for the LPC1114
 */

#ifndef TIMER_H_
#define TIMER_H_

namespace CubeControl
{

namespace Timer
{

namespace GPTimer // General Purpose 16/32-bit timers
{

enum Timer : unsigned int
{
    CT16B0 = 0,
    CT16B1 = 1,
    CT32B0 = 2,
    CT32B1 = 3
};

constexpr unsigned int baseAddress = 0x4000C000;
constexpr unsigned int timerSpacing = 0x4000;

constexpr unsigned int IR_Offset = 0x000; // Interrupt Register (IR). The IR can be written to clear interrupts. The IR
constexpr unsigned int TCR_Offset = 0x004; // Timer Control Register (TCR). The TCR is used to control the Timer
constexpr unsigned int TC_Offset = 0x008; // Timer Counter (TC). The 16-bit TC is incremented every PR+1 cycles of
constexpr unsigned int PR_Offset = 0x00C; // Prescale Register (PR). When the Prescale Counter (below) is equal to
constexpr unsigned int PC_Offset = 0x010; // Prescale Counter (PC). The 16-bit PC is a counter which is incremented
constexpr unsigned int MCR_Offset = 0x014; // Match Control Register (MCR). The MCR is used to control if an interrupt
constexpr unsigned int MR0_Offset = 0x018; // Match Register 0 (MR0). MR0 can be enabled through the MCR to reset
constexpr unsigned int MR1_Offset = 0x01C; // Match Register 1 (MR1). See MR0 description. 0
constexpr unsigned int MR2_Offset = 0x020; // Match Register 2 (MR2). See MR0 description. 0
constexpr unsigned int MR3_Offset = 0x024; // Match Register 3 (MR3). See MR0 description. 0
constexpr unsigned int CCR_Offset = 0x028; // Capture Control Register (CCR). The CCR controls which edges of the
constexpr unsigned int CR0_Offset = 0x02C; // Capture Register 0 (CR0). CR0 is loaded with the value of TC when
constexpr unsigned int EMR_Offset = 0x03C; // External Match Register (EMR). The EMR controls the match function
constexpr unsigned int CTCR_Offset = 0x070; // Count Control Register (CTCR). The CTCR selects between Timer and
constexpr unsigned int PWMC_Offset = 0x074; // PWM Control Register (PWMCON). The PWMCON enables PWM mode

static inline volatile unsigned int& IR(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + IR_Offset);
}

static inline volatile unsigned int& TCR(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + TCR_Offset);
}

static inline volatile unsigned int& TC(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + TC_Offset);
}

static inline volatile unsigned int& PR(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + PR_Offset);
}

static inline volatile unsigned int& PC(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + PC_Offset);
}

static inline volatile unsigned int& MCR(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + MCR_Offset);
}

static inline volatile unsigned int& MR0(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + MR0_Offset);
}

static inline volatile unsigned int& MR1(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + MR1_Offset);
}

static inline volatile unsigned int& MR2(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + MR2_Offset);
}

static inline volatile unsigned int& MR3(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + MR3_Offset);
}

static inline volatile unsigned int& CCR(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + CCR_Offset);
}

static inline volatile unsigned int& CR0(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + CR0_Offset);
}

static inline volatile unsigned int& EMR(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + EMR_Offset);
}

static inline volatile unsigned int& CTCR(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + CTCR_Offset);
}

static inline volatile unsigned int& PWMC(Timer timer)
{
    return *reinterpret_cast<unsigned int*>(baseAddress + timerSpacing * timer + PWMC_Offset);
}

} // GPTimer


namespace WDT //Watchdog Timer
{

constexpr unsigned int baseAddress = 0x40004000;

constexpr unsigned int WDMOD_Offset = 0x000; // Watchdog mode register
constexpr unsigned int WDTC_Offset = 0x004; // Watchdog timer constant register
constexpr unsigned int WDFEED_Offset = 0x008; // Watchdog feed sequence register
constexpr unsigned int WDTV_Offset = 0x00C; // Watchdog timer value register
constexpr unsigned int WDWARNINT_Offset = 0x014; // Watchdog Warning Interrupt compare value
constexpr unsigned int WDWINDOW_Offset = 0x018; // Watchdog Window compare value


constexpr volatile unsigned int& WDMOD()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + WDMOD_Offset);
}

constexpr volatile unsigned int& WDTC()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + WDTC_Offset);
}

constexpr volatile unsigned int& WDFEED()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + WDFEED_Offset);
}

constexpr volatile unsigned int& WDTV()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + WDTV_Offset);
}

constexpr volatile unsigned int& WDWARNINT()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + WDWARNINT_Offset);
}

constexpr volatile unsigned int& WDWINDOW()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + WDWINDOW_Offset);
}

}


namespace SysTick
{

constexpr unsigned int baseAddress = 0xE000E000;

constexpr unsigned int SYST_CSR_Offset = 0x010; // System Timer Control and status register
constexpr unsigned int SYST_RVR_Offset = 0x014; // System Timer Reload value register
constexpr unsigned int SYST_CVR_Offset = 0x018; // System Timer Current value register
constexpr unsigned int SYST_CALIB_Offset = 0x01C; // System Timer Calibration value register

constexpr volatile unsigned int& SYST_CSR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + SYST_CSR_Offset);
}

constexpr volatile unsigned int& SYST_RVR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + SYST_RVR_Offset);
}

constexpr volatile unsigned int& SYST_CVR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + SYST_CVR_Offset);
}

constexpr volatile unsigned int& SYST_CALIB()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + SYST_CALIB_Offset);
}

}


} // Timer

} // CubeControl



#endif /* TIMER_H_ */
