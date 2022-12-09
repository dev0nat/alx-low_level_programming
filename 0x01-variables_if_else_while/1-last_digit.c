#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - function checks few conditions and prints out strings
 *
 *  Return: returns 0 (Success)
 */

int main(void)
{
	int n;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%s %i is", str, n);
	n %= 10;
	if (n > 5)
	{
	printf("%i and is greater than 5\n", n);
	}
	else if (n == 0)
	{
	printf("%i and is 0\n", n);
	}
	else if (n < 6 && n != 6)
	{
	printf("%i and is less than 6 and not 0\n", n);
	}

	return (0);
}
