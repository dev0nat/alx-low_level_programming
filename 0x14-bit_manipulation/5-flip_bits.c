#include "main.h"

/**
 * flip_bits - Function returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: The number.
 * @m: The number to flip n to.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned int xor;

	xor = n ^ m;
	while (xor)
	{
		i += (xor & 1);
		xor >>= 1;
	}
	return (i);
}
