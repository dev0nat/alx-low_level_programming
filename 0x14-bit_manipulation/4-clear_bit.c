#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * 
 * @n: pointer of an unsigned long int.
 * @index: Index of the input
 * Return: returns 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	p = 1 << index;
	*n = *n & ~p;

	return (1);
}
