#include "main.h"

/**
 *  main - functions prints out a string using _putchar from main.h
 *
 *  Return: returns 0 (Success)
 */
int main(void)
{

	char str[] = "_putchar";
	int i;

	for (i = 0;i < 8;i++)
		_putchar(str[i]);
		_putchar('\n');

	return (0);
}
