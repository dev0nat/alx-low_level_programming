#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 *
 * @s: area to be filled
 * @b: constant byte
 * @n: number of bytes
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
