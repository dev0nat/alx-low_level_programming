#include "main.h"

/**
 * print_number - Prints numbers using recurssion without arrays/pointers
 * @n: holds input integer
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}

	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
