#include "holberton.h"

int is_lower(char c);
int to_upper(char c);
/**
 * string_toupper - converst string to all uppercase
 * @s: passed string
 * Return: returns string as uppercase
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (is_lower(s[i]))
			s[i] = to_upper(s[i]);
		else
			s[i] = s[i];
		i++;
	}
	return (s);
}
/**
 * is_lower - checks if character is lower case
 * @c: character passed
 * Return: 1 if character is lowercase, 0 if fail
 */
int is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
/**
 * to_upper - returns character as uppercsae
 * @c: passed character
 * Return: uppercase value
 */
int to_upper(char c)
{
	return (c - 32);
}
