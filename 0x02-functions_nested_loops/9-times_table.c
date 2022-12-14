#include "main.h"

void times_table(void)
{
	int row, col;
	int k;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');

		for (col = 1; col <= 9; col++)
		{
			_putchar(',');
			_putchar(' ');

			k = row * col;

			if (k <= 9)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');

			_putchar((k % 10) + '0');
		}
	}
}
