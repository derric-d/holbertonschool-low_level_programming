#include "holberton.h"

/**
 * clear_bit - set bit value to zero at index
 * @n: value passed
 * @index: index given to change
 * Return: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ul_one = 1;

	if (index >= sizeof(n)  * 8)
		return (-1);

	*n = *n & (~(ul_one << index));
	return (1);
}
