#include "holberton.h"

/**
 * bincon - converts binary to decimal
 * @b: binary val passed as string
 * @i: counter
 * Return: binary as decimal value
 */
int bincon(char *b, int i)
{
	int len;

	for (len = 0; b[len] != '\0'; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);
	if (i == len - 1)
		return (b[i] - '0');

	return ((unsigned int)(((b[i] - '0') << (len - i - 1)) + bincon(b, i + 1)));
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string in binary
 * Return: number as decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret_val;
	
	if (!b)
		return (0);
	ret_val = bincon((char *)b, 0);
	return (ret_val);
}
