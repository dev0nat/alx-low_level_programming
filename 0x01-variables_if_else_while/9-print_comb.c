#include <stdio.h>

/**
 *  main - prints 0 - 9 with ,
 *
 *  Return: returns 0 (Success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	if (x == '9')
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');

	return (0);
}
