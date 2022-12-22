#include "main.h"

/**
 *reverse_array - concatinates dest and src strings
 *
 *@a: holds input array.
 *@n: the size.
 *
 */
void reverse_array(int *a, int n)
{
	int index, tmp;

	index = n - 1;
	while (index >= n / 2)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
		index--;
	}
}
