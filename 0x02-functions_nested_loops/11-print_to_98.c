#include "main.h"

/**
 *  print_to_98 - function prints natural number upto 98
 *
 * @n : holds the input
 *
 *  Return: returns the output
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			_putchar(n);
		_putchar(',');
		_putchar(' ');
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			_putchar(n);
		_putchar(',');
		_putchar(' ');
		}
	}


}
