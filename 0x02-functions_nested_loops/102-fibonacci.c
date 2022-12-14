#include<stdio.h>

/**
 * main - prints out first 50 Fibonacci numbers starting with 1 and 2.
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	int i;

	for (int i = 0; i < 50; i++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
