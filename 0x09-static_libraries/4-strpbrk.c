#include "main.h"

/**
 * _strpbrk - function searches a string for set of byte
 *
 * @s: input
 * @accept: input
 * Return: returns s+i or null depending on the condition
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
