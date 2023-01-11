#include "main.h"

/**
 *  _isalpha - function checkes whether an is an alphabet or not
 *
 * @c: checks input of function
 *
 *  Return: returns an integer c (Success)
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
