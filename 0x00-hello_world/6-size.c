#include <stdio.h>

/*
 * main - prints sizeof reserved variables
 * Return: returns 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)",sizeof(char));
	printf("Size of a char: %lu byte(s)",sizeof(int));
	printf("Size of a char: %lu byte(s)",sizeof(long int));
	printf("Size of a char: %lu byte(s)",sizeof(long long int));
	printf("Size of a char: %lu byte(s)",sizeof(float));
	return(0);
}
