#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - inititializes a dog struct
 * @d: dog struct passed
 * @name: name init
 * @age: age to init
 * @owner: owner to init
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	(*d).age = age;
	d->owner = owner;
}
