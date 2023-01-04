#include "main.h"

/**
 * _sqrt - function returns square root of a number
 *
 * @n: input to compute square root of
 * @r: root
 * Return: square root
 */
int _sqrt(int n, int r)
{
	if ((r * r) == n)
		return (r);

	if (r == n / 2)
		return (-1);
	else
		return (find_sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - recursive function returns square root of a natural number
 *
 * @n: number to calculate the square root of
 * Return: the resulting square root of @n
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	else
		return (_sqrt(n, r));
}
