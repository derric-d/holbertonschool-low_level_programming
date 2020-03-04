#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - make array w/ mem allocation
 * @size: size of the array
 * @c: character being put in array
 * Return: array pointer
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(size * sizeof(char));

	if (array == 0 || !size)
		return (NULL);

	while (size--)
		array[size] = c;

	return (array);
}
