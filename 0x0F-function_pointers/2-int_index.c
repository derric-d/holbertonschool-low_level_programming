#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - executes function on each element of array
 * @array: given array
 * @size: size of arr given
 * @cmp: function acting on each element
 * Return: returns element index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
