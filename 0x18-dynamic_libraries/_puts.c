#include "main.h"

/**
 * _puts - function prints an integer
 *
 * @str: holds our input integer
 *
 * Return: prints the string.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
