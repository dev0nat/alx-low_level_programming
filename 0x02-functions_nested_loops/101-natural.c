#include <stdio.h>

/**
 *  main - function prints sumofNatural numbers under 1024 divisable by 3 and 5
 *
 *  Return: returns 0 (Success)
 */
int main(void)
{
	int n;
	int div;

	for (n = 0; n < 1024; n++)
	if (n % 3 == 0 || n % 5 == 0)
	{
		div = div + n;
	}
	printf("%d \n", div);

	return (0);
}
