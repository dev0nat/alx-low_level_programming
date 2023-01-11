#include <stdio.h>

/**
 * main - functions prints the number of arguments passed into it
 *
 * @argc: num of passed arg
 * @argv: array pointer holding passed arg
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
