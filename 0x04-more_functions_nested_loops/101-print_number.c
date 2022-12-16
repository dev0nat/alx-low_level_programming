#include "main.h"

/**
 *  print_number - function prints an integer
 *
 * @n: holds our input integer
 *
 * Return: returns nothing.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar(45);
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
