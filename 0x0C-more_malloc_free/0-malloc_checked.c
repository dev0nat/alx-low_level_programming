#include "main.h"

/**
 *malloc_checked - function allocates memory.
 *
 *@b: size of memory to be allocated.
 *Return: ptr
 **/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
