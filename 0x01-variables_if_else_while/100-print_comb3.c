#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * Return: 0
 */
int main(void)
{
	int x;
	int y = 0;

	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			if (y != x && y < x)
			{
				putchar('0' + y);
				putchar('0' + x);

				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
