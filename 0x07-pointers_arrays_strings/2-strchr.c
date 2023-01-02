#include "main.h"

/**
 * _strchr - function locates a character in a string
 *
 * @s: area to be filled
 * @c: constant byte
 * Return: returns s or null depending on the condition
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
