#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	puts("Size of a char: %d bytes(s)", sizeof(char));
	puts("Size of an int: %d bytes(s)", sizeof(int));
	puts("Size of a long int: %d bytes(s)", sizeof(long));
	puts("Size of a long long int: %d bytes(s)", sizeof(long long));
	puts("Size of a float: %d bytes(s)", sizeof(float));

	return (0);
}
