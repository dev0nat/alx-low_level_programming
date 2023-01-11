#include <stdio.h>
#include <stdlib.h>

/**
 * main - function adds two positive numbers.
 *
 * @argc: number of arguments passed
 * @argv: pointer array of arguments
 * Return: returns 0 (Success)
 **/
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
