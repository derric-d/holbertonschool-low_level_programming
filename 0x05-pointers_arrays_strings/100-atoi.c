#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int _atoi(char *s)
{
	int result = 0;
	while ((*s >= '0') && (*s <= '9'))
	{
		result = (result * 10) + (*s - '0');
		s++;
	}
	return (result);
}
