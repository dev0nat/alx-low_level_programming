#include <stdio.h>

/**
 *  main - prints lower & Uppercase a - z
 *
 *  Return: returns 0 (Success)
 */
int main(void)
{
	char x = 'a', y = 'A';

	for (; x <= 'z'; x++)
	putchar(x);
	for (; y <= 'Z'; y++)
	putchar(y);
	putchar('\n');

	return (0);
}
