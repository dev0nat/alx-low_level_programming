#include "main.h"

/**
 * rot13 - function convert letters into rot13 encryption
 *
 * @str: holds our input integer
 * Return: returns the rot13 encrypted str
 */
char *rot13(char *str)
{
	int index, a;
	char l[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	index = 0;
	while (str[index] != '\0')
	{
		a = 0;
		while (a < 52)
		{
			if (str[index] == l[a])
			{
				str[index] = rot[a];
				break;
			}
			a++;
		}
		index++;
	}

	return (str);
}
