/*
 * bitutils.h
 *
 *  Created on: Oct 25, 2018
 *      Author: Charles
 */

#ifndef BITUTILS_H_
#define BITUTILS_H_

namespace CubeControl
{

static inline void set_bit(volatile unsigned int &word, unsigned int bit)
{
	word |= 1 << bit;
}

static inline void clear_bit(volatile unsigned int &word, unsigned int bit)
{
	word &= ~(1 << bit);
}

static inline char get_bit(volatile const unsigned int word, unsigned int bit)
{
    return (word >> bit) & 1;
}

static inline void masked_write_bits(volatile unsigned int &word, unsigned int bits, unsigned int mask)
{
	word = (word & (~mask)) | (bits & mask);
}

static inline void masked_write_bits_unsafe(volatile unsigned int &word, unsigned int bits, unsigned int mask)
{
	word = (word & (~mask)) | (bits);
}

}

#endif /* BITUTILS_H_ */
