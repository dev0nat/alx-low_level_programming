#include "main.h"

/**
 *  print_most_numbers - function prints from 0 - 9 except 2 & 4
 *
 *
 *  Return: returns nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		if (i == 50 || i == 52)
			continue;
		else
		_putchar(i);
	_putchar('\n');
}
