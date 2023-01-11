#include <stdio.h>

/**
 * main - function prints file name followed by new line
 *
 * @argc: int
 * @argv: list
 * Return: returns 0  (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
