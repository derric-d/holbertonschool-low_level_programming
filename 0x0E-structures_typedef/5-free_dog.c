#include "dog.h"
#include "stdlib.h"

/**
 * free_dog - frees all allocated parts of dog struct
 * @dog: dog struct passed
 */
void free_dog(dog_t *dog)
{
	if (dog == NULL)
		return;

	free(dog->owner);
	free(dog->name);
	free(dog);
}
