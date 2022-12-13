#include "main.h"

/**
 *  print_last_digit - takes and input and gives input %
 *
 * @n : holds the input
 *
 *  Return: returns the lasdigit of our input
 */
int print_last_digit(int n)
{
	int digit;

	if (n > 0)
	{
		digit = n % 10;
	}
	else
	{
		digit = (n % 10) * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
