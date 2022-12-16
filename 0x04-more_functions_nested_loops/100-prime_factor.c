#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: return 0 on completion
 */
int main(void)
{
	int inc, pf;
	long int num = 612852475143;

	for (inc = 2; num > 1; inc++)
	{
		while (num % inc == 0)
		{
			num = num / inc;
			pf = inc;
		}
	}

	printf("%d\n", pf);
	return (0);
}
