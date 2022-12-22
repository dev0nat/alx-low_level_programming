#include "main.h"

/**
 *_strcmp - function compares two strings
 *
 *@s1: first string.
 *@s2: second string
 *
 *Return: tmp.
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0, tmp = 0;

	while (s1[index] != '\0' && s2[index] != '\0')
	{
		tmp = s1[index] - s2[index];
		if (s1[index] != s2[index])
		{
			break;
		}
		index++;
	}
	return (tmp);
}
