#include<stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 *
 * @str: input string
 * Return: returns pointer of an array of chars
 */
char *_strdup(char *str)
{
	unsigned int index, len;
	char *dup;

	if (str != NULL)
		len = strlen(str);

	dup = malloc(len * sizeof(char) + 1);

	if ((str == NULL) || (dup == NULL))
		return (NULL);

	for (index = 0; index <= len; index++)
	{
		dup[index] = str[index];
	}
	dup[index] = '\0';

	return (dup);
}
