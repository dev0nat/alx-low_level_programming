#include <stdlib.h>
#include "main.h"


/**
 * create_array - function dynamically creates an array chars
 *
 * @size: size of array
 * @c: input string
 * Return: returns 0 Sucess
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int index;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
	{
		ptr[index] = c;
	}
	return (ptr);
}
