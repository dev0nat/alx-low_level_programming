#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function prints numbers followed by a new line
 *
 * @separator: string between numbers
 * @n: the amount of arguments in list
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i = 0;

	va_start(vl, n);

	while (i < n)
	{
		printf("%d", va_arg(vl, unsigned int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(vl);
}
