#include "main.h"

/**
 * print_array - Prints an array
 * @a: holds an array
 * @n: holds a string length
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", s[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
