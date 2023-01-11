#include "main.h"

/**
 * _strspn - function gets a length of a prefix substring
 *
 * @s: string to scan
 * @accept: string of bytes to compare with
 * Return: returns i
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (i);
}
