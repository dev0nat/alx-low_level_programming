#include <stdio.h>
#include <stdlib.h>

/**
 * main - function multiplies two numbers.
 *
 * @argc: number of arguments
 * @argv: pointer array of arguments
 * Return: returns 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	return (0);
}
