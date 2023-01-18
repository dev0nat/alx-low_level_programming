#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 *
 * @array: array to be searched
 * @size: array size
 * @cmp: pointer to the comparing function
 * Return: first index for which cmp doesn't return 0 to or -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
