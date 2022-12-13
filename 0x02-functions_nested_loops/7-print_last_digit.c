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
	n = n % 10;
	_putchar(n);
	return (n);
}
