#include <stdio.h>

/**
 * main - function prints all arguments it receives.
 *
 * @argc: number of arguments
 * @argv: array with the arguments
 * Return: returns 0  (Success)
 **/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
