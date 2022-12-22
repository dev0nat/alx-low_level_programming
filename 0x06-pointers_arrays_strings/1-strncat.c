#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int dIndex = 0, sIndex = 0;

	while (dest[dIndex] != '\0')
		dIndex++;

	while (sIndex < n && src[sIndex] != '\0')
	{
		dest[dIndex+sIndex] = src[sIndex];
		sIndex++;
	}

	return (dest);	
}
