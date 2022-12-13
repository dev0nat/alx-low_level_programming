#include "main.h"

/**
 *  main - functions prints out a string using _putchar from main.h
 *
 *  Return: returns 0 (Success)
 */
int main(void)
{

	char str[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(str[i]);
		_putchar('\n');
		i++;
	}

	return (0);
}
