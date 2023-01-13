#include "main.h"

/**
**string_nconcat - functions concatenates two strings.
*
*@s1: first string
*@s2: second string
*@n: index
*Return: str
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j)
		n = j;

	str = malloc((i + n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		str[k] = s1[k];

	for (k = 0; k < n; k++)
	{
		str[k + i] = s2[k];
	}
	str[k + i] = '\0';

	return (str);
}
