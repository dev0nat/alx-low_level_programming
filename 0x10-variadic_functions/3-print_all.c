#include "variadic_functions.h"

/**
  * print_all - Function prints any input
  * @format: an array of chars signifying which data type to print
  *
  * Return: returns nothing.
  */
void print_all(const char * const format, ...)
{
	va_list vl;
	int i = 0, j = 0;
	char *str;
	char *separator = ", ";

	va_start(vl, format);

	while (format && format[j])
		j++;
	while (format && format[i])
	{
		if (i  == (j - 1))
			separator = "";
	switch (format[i])
	{
		case 'c':
			printf("%c%s", va_arg(vl, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(vl, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(vl, double), separator);
			break;
		case 's':
			str = va_arg(vl, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", str, separator);
			break;
	}
	i++;
	}
	printf("\n"), va_end(vl);
}
