#include "holberton.h"

int check_p(char *s, int i);
int _strlen(char *s, int i);
/**
 * is_palindrome - checks if passed string is same backwards
 * @s: passed string
 * Return: 1 if tstring is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (check_p(s, _strlen(s, 0)));
}
/**
 * check_p - checks if string is palindrome
 * @s: string passed
 * @i: distance between checked chars
 * Return: 1 if check passes, 0 if fail
 */
int check_p(char *s, int i)
{
	#if 0
		we need to check that
		string@[place] == string@[opposite]
		it will continue to call the check
		until either i <= 0
			(no difference in start and end)
		OR as soon as s[place] has no mirror
	#endif
	if (i <= 0)
		return (1);
	if (*s != *(s + i - 1))
		return (0);
	return (check_p(s + 1, i - 2));
}

/**
 * _strlen - gets length of passed string
 * @s: passed string
 * @i: return int, get incremented
 * Return: length of string as int
 */
int _strlen(char *s, int i)
{
	if (*s == '\0')
		return (i);
	return (_strlen(s + 1, i + 1));
}
