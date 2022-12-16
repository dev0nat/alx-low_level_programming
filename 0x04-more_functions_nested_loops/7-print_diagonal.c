#include "main.h"

/**
 *  print_diagonal - function prints an diagonal lines
 *
 * @n: holds the number of \ to be printed
 *
 * Return: returns nothing.
 */
void print_diagonal(int n)
{
	int l, s;

	l = 1;

	if (n > 0)
	{
		while (l <= n)
		{
			s = 1;

			while (s < l)
			{
				_putchar(' ');
				s++;
			}

			_putchar('\\');
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
