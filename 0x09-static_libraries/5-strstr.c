#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - search for occurance of string
 * @haystack: serched body
 * @needle: search object
 * Return: string of search object
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; *(needle + i); i++)
			if (*(needle + i) != *(haystack + i))
				break;
		if (!*(needle + i))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
