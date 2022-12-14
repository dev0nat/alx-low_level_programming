#include "main.h"

/**
 *  print_times_table - function prints 'n's time table
 *
 *@n : holds functions integer value
 *
 *  Return: returns nothing.
 */
void print_times_table(int n)
{
	int row = 0, col;
	int k;

	if (n > 15 || n < 0)
		return;
	while (row <= n)
	{
		for (col = 0; col <= n; col++)
		{
			k = row * col;
			if (k > 99)
			{
				_putchar(k / 100 + '0');
				_putchar((k / 10 % 10) + '0');
				_putchar(k % 10 + '0');
			}
			else if (k > 9)
			{
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else if (col != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else
				_putchar(k + '0');

			if (col != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		row++;
	}
}
