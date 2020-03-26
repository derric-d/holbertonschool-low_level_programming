#include "holberton.h"

/**
 * set_bit - sets bit to 1 at given index
 * @n: pointer to value passed
 * @index: index given
 * Return: 1 on success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (!n || index >= sizeof(n) * 8)
		return (-1);

	mask <<= index;
	*n |= mask;

	return (1);
}
