#include "main.h"

/**
 *  print_line - function prints an n number of dash
 *
 * @n: holds our input
 *
 *  Return: returns nothing
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
