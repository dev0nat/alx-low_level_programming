#include <stdio.h>

/**
 *  main - prints a - z followed by new line
 *
 *  Return: returns 0 (Success)
 */

int main(void)
{
	char x = 'a';

	for (; x <= 'z'; x++)
	{
	putchar(x);
	putchar('\n');
	}
	return (0);
}
