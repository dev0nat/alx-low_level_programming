#include "main.h"

/**
 *_strcat - concatinates dest and src strings
 *@dest: destination string.
 *@src: source string.
 *@n: number of by to be appended
 *Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dIndex = 0, sIndex = 0;

	while (dest[dIndex] != '\0')
		dIndex++;

	while (sIndex < n && src[sIndex] != '\0')
	{
		dest[dIndex + sIndex] = src[sIndex];
		sIndex++;
	}

	dest[dIndex + sIndex] = '\0';

	return (dest);
}
