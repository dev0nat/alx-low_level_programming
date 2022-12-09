#include <stdio.h>

/**
 *  main - prints a - z backwards
 *
 *  Return: returns 0 (Success)
 */
int main(void)
{
	char x = 'z';

	for (; x >= 'a'; x--)
	putchar(x);
	putchar('\n');
	return (0);
}

