#include "holberton.h"
/**
 * _abs - returns absolute val
 * @n: int value being passed
 * Description: returns absolute value of int
 * Return: value absolute
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (n);
}
