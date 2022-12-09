#include <stdio.h>

/**
 *  main - prints out 0-9 with putchar
 *
 *  Return: returns 0 (Success)
 */

int main(void)
{
	int x = 48;

	for (; x < 58; x++)
	putchar(x);
	putchar('\n');
	return (0);
}

