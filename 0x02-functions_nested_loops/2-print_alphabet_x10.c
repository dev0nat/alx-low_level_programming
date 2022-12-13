#include "main.h"

/**
 *  print_alphabet_x10 - prints alphabets with putchar x10
 *
 *  Return: returns nothing
 */
void print_alphabet_x10(void)
{

	int i, x10;

	for (x10 = 0; x10 < 10; x10++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}


}
