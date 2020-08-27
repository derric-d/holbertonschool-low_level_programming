#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value);
/**
 * exponential_search - search exponentially
 * @array: passed structure
 * @size: of array
 * @value: target for search
 * Return: index of found target
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, split = 0;
	int tmp;

	if (!array || !size)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		i / 2, (i >= size ? size - 1 : i));

	if (i >= size)
		split = size;
	else
		split = i + 1;
	i /= 2;
	tmp = binary_search(array + i, split - i, value);
	if (tmp == -1)
		return (tmp);
	else
		return (tmp + (int)i);
}

/**
 * binary_search - algorithm in c
 * @array: array to search
 * @size: size of array
 * @value: value to search
 *
 * Return: index if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end;

	start = 0;
	end = size - 1;

	if (!array)
		return (-1);

	while (start <= end)
	{
		/*arr_progression(array, start, end);*/
		mid = (start + end) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
