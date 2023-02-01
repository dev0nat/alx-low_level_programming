#include "lists.h"

/**
 * before - Function prints a string ahead of main function's execution
 */
void __attribute__ ((constructor)) before()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
