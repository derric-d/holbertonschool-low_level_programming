#include "holberton.h"
#include <stdlib.h>
int diff(int min, int max);
/**
 * array_range - creates an array of integers
 * @min: min number value
 * @max: max number value
 * Return: returns array of integers min to max
 */
int *array_range(int min, int max)
{
	int i, len;
	int *arr;

	if (min > max)
		return (NULL);
	len = diff(min, max);

	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}

/**
 * diff - gets range from min to max
 * @min: lower limit
 * @max: upper limit
 * Return: Range between min and max
 */
int diff(int min, int max)
{
	int j;

	for (j = 0; min != max; min++)
		j++;

	j++;
	return (j);
}
