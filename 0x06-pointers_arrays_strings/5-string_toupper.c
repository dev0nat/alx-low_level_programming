#include "main.h"

/**
 * string_toupper - function converts a lowercase to uppercase
 *
 * @str: string to be changed
 * Return: str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
