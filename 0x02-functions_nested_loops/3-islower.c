#include "holberton.h"
/**
 * _islower - says if character is upper or lower case
 * @c: character being judged
 * Return: 1 if character is lower case
 *         0 if otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
