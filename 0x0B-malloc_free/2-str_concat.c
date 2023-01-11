#include "main.h"

/**
 * str_concat - function concatenate two numbers
 *
 * @s1: char 1
 * @s2: char 2
 * Return: returns concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int a = 0, b = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	str = malloc((a * sizeof(char)) + ((b + 1) * sizeof(char)));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';

	return (str);
}
