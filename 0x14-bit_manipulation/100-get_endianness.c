#include "holberton.h"

/**
 * get_endianness - function checks endianess of architecture
 * Return: 1 if little endian, 0 if big
 */
int get_endianness(void)
{
	int num = 1;
	char * c;

	c = (char *)&num;
	return (*c ? 1 : 0);
}
