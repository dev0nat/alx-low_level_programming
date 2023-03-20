#include "main.h"

/**
 *_strncpy - concatinates dest and src strings
 *@dest: destination string.
 *@src: source string.
 *@n: number of bytes to be copied from src
 *Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
