#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a dog
 * @d: pointer
 * @name: name of dog
 * @age: age in float
 * @owner: name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
