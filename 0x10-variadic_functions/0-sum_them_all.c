#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - funtion returns sum of all arguments
 *
 * @n: integers to add
 * Return: returns sum or 0 otherwise.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i = 0, sum = 0;

	if (n != 0)
	{
		va_start(vl, n);

		while (i < n)
		{
			sum = sum + va_arg(vl, int);
			i++;
		}

		va_end(vl);
		return (sum);
	}

	return (0);
}
