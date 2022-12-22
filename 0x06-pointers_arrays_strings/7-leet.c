#include "main.h"

/**
 * leet - function convert letters into leet spellings
 *
 * @str: holds our input integer
 * Return: returns str
 */
char *leet(char *str)
{
	int index, a;
	char ul[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char leet[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	index = 0;
	while (str[index] != '\0')
	{
		a = 0;
		while (a < 10)
		{
			if (str[index] == ul[a])
			{
				str[index] = leet[a];
			}
			a++;
		}
		index++;

	}
	return (str);
}
