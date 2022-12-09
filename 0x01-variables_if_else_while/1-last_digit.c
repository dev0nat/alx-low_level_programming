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
	n %= 10;
	printf("%s %i is", str, n)
	if (n > 5)
	{
	printf("and is greater than 5\n", str, n);
	}
	else if (n == 0)
	{
	printf("and is 0\n", str, n);
	}
	else if (n < 6 && n != 6)
	{
	printf("and is less than 6 and not 0\n", str, n);
	}

	return (0);
}
