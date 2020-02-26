#include "holberton.h"

#define NULL 0

/**
 * factorial - return the factorial of n
 * @n: the number passed
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (factorial(n - 1) * n);
}
