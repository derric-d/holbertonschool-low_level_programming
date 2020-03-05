#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - checks malloc exit stauts on fail
 * @b: size of allocated space
 * Return: pointer to allocated space
 */
void *malloc_checked(unsigned int b)
{
	int *dest;

	dest = malloc(sizeof(int) * b);
	if (dest == NULL)
		exit(98);

	return (dest);

}
