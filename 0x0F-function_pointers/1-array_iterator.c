#include "function_pointers.h"

/**
 * array_iterator - function executes a function given as a parameter.
 *
 * @array: the array.
 * @size: array size.
 * @action: pointer function.
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}

}
