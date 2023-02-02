#include "main.h"

/**
 * binary_to_uint - Function converts a binary number to an unsigned int.
 *
 * @b: pointer to a string of 0 and 1 chars.
 * Return: converted decimal, or NULL otherwise.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int index;

	if (b == NULL)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);

		decimal = 2 * decimal + (b[index] - '0');
	}
	return (decimal);
}
