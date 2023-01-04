#include "main.h"

/**
 * is_prime - function checks if an input is a prime number
 *
 * @n: the number to check
 * @i: number to start from
 * Return: 1 if number is prime, 0 otherwise
 */
int is_prime(int n, int i)
{
	if (i > n / 2)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime(n, i + 1));
}

/**
 * is_prime_number - function
 *
 * @n: input number
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(n, 2));
}
