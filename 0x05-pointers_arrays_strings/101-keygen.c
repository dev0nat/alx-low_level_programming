#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - create a keygen
 *
 * Return: 0
 */
int main(void)
{
	char pass[100];
	int i = 0, randNum = 0, sum = 0;

	srand (time(NULL));


	for (i = 0; sum <= 2644; i++)
	{
		randNum = (rand() % 25) + 65;

		pass[i] = randNum;
		sum = sum + randNum;
	}

	pass[i++] = 2772 - sum;
	pass[i++] = '\0';

	printf("%s\n", pass);

	return (0);
}
