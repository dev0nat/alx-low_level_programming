#include "main.h"

/**
 * _memcpy - function copies n number of bytes from src to dest
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copied
 * Return: returns s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
