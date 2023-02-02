#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index.
 *
 * @n: A pointer to the bit.
 * @index: input index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	p = p << index;
	*n = ((*n) | p);

	return (1);
}
