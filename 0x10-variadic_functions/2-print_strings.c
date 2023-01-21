#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings -  Function prints strings followed by a new line
 *
 * @separator: input separator
 * @n: arguments in a list
 * Return: returns nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(vl, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(vl, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		va_end(vl);
	}
	printf("\n");
}
