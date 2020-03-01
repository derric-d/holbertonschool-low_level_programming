#include "holberton.h"

/**
 * _memset - set mem area dest with n bytes of char b
 * @dest: memory target area
 * @b: passed character
 * @n: byte number
 * Return: memory area altered
 */
char *_memset(char *dest, char b, unsigned int n)
{
	while (n--)
	{
		*(dest + n) = b;
	}
	return (dest);
}
