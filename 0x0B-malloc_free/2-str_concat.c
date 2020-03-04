#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: string being added to
 * @s2: string to add
 * Return: the combined strings
 */
char *str_concat(char *s1, char *s2)
{
	char *comb;
	int len1, len2, i, j, endcnt;

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
	comb = malloc(sizeof(*comb) * (len1 + len2) + 1);
	if (comb == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++, endcnt++)
			comb[endcnt] = s1[i];
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j]; j++, endcnt++)
			comb[endcnt] = s2[j];
	}
	comb[endcnt] = '\0';
	return (comb);
}
