#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - maps function to each element
 * @array: ptr to array passed
 * @size: size of array passed
 * @action: function passed to be used on each element of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
