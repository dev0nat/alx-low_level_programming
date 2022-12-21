#include "main.h"

/**
 *_strcat - concatinates dest and src strings
 *@dest: destination string.
 *@src: source string.
 *Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int dIndex = 0, sIndex = 0;

	while (dest[dIndex] != '\0')
		dIndex++;

	while (src[sIndex] != '\0')
	{
		dest[dIndex] = src[sIndex];
		dIndex++;
		sIndex++;
	}

	dest[dIndex] = '\0';

	return (dest);
}
