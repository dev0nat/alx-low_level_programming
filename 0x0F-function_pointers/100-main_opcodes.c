#include<stdlib.h>
#include<stdio.h>

/**
 * main - Function print the opcodes of this program
 *
 * @argc: length of arguments
 * @argv: number of bytes
 * Return: returns nothing.
 */
int main(int argc, char **argv)
{
	int i, j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < j - 1; i++)
		printf("%02hhx ", *((char *)main + i));

	printf("%02hhx\n", *((char *)main + i));

	return (0);
}

