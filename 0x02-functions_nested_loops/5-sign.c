#include "main.h"

/**
 *  print_sign - function checkes a sign on an input
 *
 * @n: checks input of function
 *
 *  Return: returns inputs sign (Success)
 */
int print_sign(int n)
{

	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}

}
