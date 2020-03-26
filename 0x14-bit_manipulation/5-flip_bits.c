#include "holberton.h"

/**
 * flip_bits - checks what bits need to be flipped to change numbers
 * @n: value passed
 * @m:value wanted
 * Return: number of bits need to change from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index, count = 0;

	for (index = 0; index < (sizeof(n) * 8); index++)
		if (((n >> index) & 1) != ((m >> index) & 1))
			count++;

	return (count);
}
