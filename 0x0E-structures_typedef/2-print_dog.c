#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function prints dog struct
 *
 * @d: instance variable of dog struct
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		d->owner = "(nil)\n";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
