#include "main.h"

/**
 * swap_int - swaps integer values with each other
 *
 * @a: pointer int
 * @b: pointer int
 *
 * Return: returns nothing.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
