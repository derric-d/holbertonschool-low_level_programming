#include "holberton.h"
/**
 * _isdigit - checks if value is digit
 * @n: value passed
 * Description: Returns 1 if value is digit
 * Return: 1 if success, 0 if not
 */
int _isdigit(int n)
{
	if (n > 47 && n < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
