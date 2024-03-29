#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function intializes dog struct
 *
 * @d: instance variable of dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
