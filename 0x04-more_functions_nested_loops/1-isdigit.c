#include "main.h"

/**
 *  _isdigit - functions checks if character is a digit or nott
 *
 * @c: holds an integer
 *
 *  Return: returns 1 or 0 depending on conditions (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}



}
