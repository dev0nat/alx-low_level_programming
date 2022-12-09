#include <stdio.h>

/**
 *  main - prints out hexadecimal values
 *
 *  Return: returns 0 (Success)
 */
int main(void)
{
	int x = 48;
	char y = 'a';

	for (; x <= 58; x++)
	putchar(x);
	for (; y <= 'f'; y++)
	putchar(y);
	putchar('\n');

	return (0);
}

