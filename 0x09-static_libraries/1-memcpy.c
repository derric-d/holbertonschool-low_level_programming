#include "holberton.h"

/**
 * _memcpy - copy from mem area src to dest for n bytes
 * @dest: destination area
 * @src: src area
 * @n: bytes
 * Return: dest altered
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*(dest + n) = *(src + n);
	}
	return (dest);
}
