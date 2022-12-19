#include "main.h"

/**
 * _strlen - function prints length of a string.
 *
 * @s: holds our pointer char
 *
 * Return: returns the length of *s
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{

	}
	return (length);
}


/**
 * puts_half - Print a second half a string
 * @str: holds our input
 */
void puts_half(char *str)
{
		int i = 0;
		int count = _strlen(str);

		for (i = (count + 1) / 2; i < count; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}
