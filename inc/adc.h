/*
 * adc.h
 *
 *  Created on: Oct 27, 2018
 *      Author: Charles Trippe
  *      An API implementation of the ADC (Analog-to-Digital Converter) register maps for the LPC1114
 */

#ifndef ADC_H_
#define ADC_H_

namespace CubeControl
{

namespace ADC
{

constexpr unsigned int baseAddress = 0x4001C000;

constexpr unsigned int AD0CR_Offset = 0x000; // A/D Control Register
constexpr unsigned int AD0GDR_Offset = 0x004; // A/D Global Data Register
constexpr unsigned int AD0INTEN_Offset = 0x00C; // A/D Interrupt Enable Register
constexpr unsigned int AD0DR0_Offset = 0x010; // A/D Channel 0 Data Register
constexpr unsigned int AD0DR1_Offset = 0x014; // A/D Channel 1 Data Register
constexpr unsigned int AD0DR2_Offset = 0x018; // A/D Channel 2 Data Register
constexpr unsigned int AD0DR3_Offset = 0x01C; // A/D Channel 3 Data Register
constexpr unsigned int AD0DR4_Offset = 0x020; // A/D Channel 4 Data Register
constexpr unsigned int AD0DR5_Offset = 0x024; // A/D Channel 5 Data Register
constexpr unsigned int AD0DR6_Offset = 0x028; // A/D Channel 6 Data Register
constexpr unsigned int AD0DR7_Offset = 0x02C; // A/D Channel 7 Data Register
constexpr unsigned int AD0STAT_Offset = 0x030; // A/D Status Register

constexpr volatile unsigned int& AD0CR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + AD0CR_Offset);
}

constexpr volatile unsigned int& AD0GDR()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + AD0GDR_Offset);
}

constexpr volatile unsigned int& AD0INTEN()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + AD0INTEN_Offset);
}

constexpr volatile unsigned int& AD0DR0()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + AD0DR0_Offset);
}

constexpr volatile unsigned int& AD0DR1()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + AD0DR1_Offset);
}

constexpr volatile unsigned int& AD0DR2()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + AD0DR2_Offset);
}

constexpr volatile unsigned int& AD0DR3()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + AD0DR3_Offset);
}

constexpr volatile unsigned int& AD0DR4()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + AD0DR4_Offset);
}

constexpr volatile unsigned int& AD0DR5()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + AD0DR5_Offset);
}

constexpr volatile unsigned int& AD0DR6()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + AD0DR6_Offset);
}

constexpr volatile unsigned int& AD0DR7()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + AD0DR7_Offset);
}

constexpr volatile unsigned int& AD0STAT()
{
    return *reinterpret_cast<unsigned int*>(baseAddress + AD0STAT_Offset);
}

} // ADC

} // CubeControl



#endif /* ADC_H_ */
