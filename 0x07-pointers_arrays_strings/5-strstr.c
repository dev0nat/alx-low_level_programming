#include "main.h"

/**
* _strstr - function locates and returns pointer to first occurence
*
* @haystack: string to search
* @needle: target substring
* Return: pointer to index of string
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return ('\0');
}
