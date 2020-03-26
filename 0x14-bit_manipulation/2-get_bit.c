#include "holberton.h"

/**
 * get_bit - returns bit value at given index
 * @n: value passed
 * @index: index to retrieve
 * Return: bit or -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
