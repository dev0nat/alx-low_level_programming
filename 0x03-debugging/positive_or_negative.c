#include <stdio.h>

/**
 *  positive_or_negative - function checkes whether an integer is positive negative or 0
 *
 * @i: holds an integer
 *
 *  Return: returns 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	else
	{
		printf("%i is negative\n", i);
	}
}
