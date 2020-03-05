#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up to n bytes
 * @s1: string one
 * @s2: string two
 * @n: number of bytes we are copying total
 * Return: pointer to concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, endcnt;
	char *comb;

	endcnt = 0;
	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; s1[len1]; len1++)
			;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; s2[len2]; len2++)
			;
	}
	comb = malloc(sizeof(*comb) * (len1 + n) + 1);
	if (comb == NULL)
		return (NULL);

	if (n >= len2)
		n = len2;
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++, endcnt++)
			comb[endcnt] = s1[i];
	}
	if (s2 != NULL)
	{
		for (j = 0; j < n; j++, endcnt++)
		comb[endcnt] = s2[j];
	}
	comb[endcnt] = '\0';
	return (comb);
}
