#include "main.h"

/**
 * rev_string - reverses our input string
 * @s: holds our input
 * Return: string reversed
 */
void rev_string(char *s)
{
	int i = 0, length = 0;
	char rev;

	while (s[i] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		rev = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = rev;
	}
}
