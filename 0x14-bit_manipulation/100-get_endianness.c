#include "holberton.h"

/**
 * get_endianness - function checks endianess of architecture
 * Return: 1 if little endian, 0 if big
 */
int get_endianness(void)
{
	int num;
	char *c;

	num = 1;
	c = (char *) &num;

	return ((int)*c);
}
