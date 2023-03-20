#include "main.h"

/**
 *  _isupper - functions checks if char is upperCase or not
 *
 * @c: holds an integer
 *
 *  Return: returns 1 or 0 depending on conditions (Success)
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
