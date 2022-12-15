#include "main.h"

/**
 *  print_square - function prints n number of square
 *
 * @size: holds size of the square
 *
 *  Return: returns nothing
 */
void print_square(int size)
{
	int i, j;

	if (size <= 1)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
			_putchar('#');
		_putchar('\n');
	}
}
