#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocate memory
 * @ptr: pointer to space of old memory
 * @old_size: old_size of allocated space
 * @new_size: size we want to reallocate for
 * Return: pointer to newly allocated space.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *copyptr;
	char *ret_arr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*maybe cast ptr to char * */
	copyptr = ptr;
	ret_arr = malloc(sizeof(char) * new_size);
	if (ret_arr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; i < old_size; i++)
			ret_arr[i] = copyptr[i];
	}
	free(ptr);
	return (ret_arr);
}
