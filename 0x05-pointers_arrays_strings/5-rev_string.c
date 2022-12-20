#include "main.h"

/**
 * rev_string - reverses our input string
 * @s: holds our input char
 */
void rev_string(char *s)
{
	int i = 0, length = 0;
	char rev = s[0];

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		length--;
		rev = s[i];
		s[i] = s[length];
		s[length] = rev;
	}
}
