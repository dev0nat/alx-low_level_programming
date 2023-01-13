#include "main.h"

/**
 * _calloc - function allocates memory of an array.
 *
 * @nmemb: size of array.
 * @size: size of elements.
 * Return: p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		p[i] = 0;

	return (p);
}
