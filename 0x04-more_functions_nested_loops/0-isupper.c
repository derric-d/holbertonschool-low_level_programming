#include "holberton.h"
/**
 * _isupper - checks if char is upper
 * @c: character passed
 * Description: Returns 1 if passed value is uppercase
 * Return: 1 if char is uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
