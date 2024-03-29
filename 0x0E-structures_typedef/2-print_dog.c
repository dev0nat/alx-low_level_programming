#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function prints dog struct
 *
 * @d: instance variable of dog struct
 */
void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			 printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			 printf("Owner: %s\n", d->owner);

		/* printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner); */
	}
}
