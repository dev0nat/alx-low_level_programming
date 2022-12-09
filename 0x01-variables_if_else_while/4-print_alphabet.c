#include <stdio.h>

/**
 *  main - prints a - z except for q & e
 *
 *  Return: returns 0 (Success)
 */

int main(void)
{
	char x = 'a';
	
	for (; x <= 'z'; x++)
	if (x != 'q' && x != 'e')
	putchar(x);
	putchar('\n');
	return (0);
}

