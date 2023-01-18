#include "function_pointers.h"

/**
 * print_name - function prints name
 *
 * @name: input
 * @f: function pointer
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
