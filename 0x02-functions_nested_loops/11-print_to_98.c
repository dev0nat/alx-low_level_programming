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
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}

