#include "main.h"

/**
 *  _islower - function checkes whether an input is lowercase or not
 *
 * @c: checks input of function
 *
 *  Return: returns an integer c (Success)
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
