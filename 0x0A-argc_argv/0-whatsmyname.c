#include <stdio.h>

/**
 * main - entrypoint
 * @argc: arg count
 * @argv: argumentvector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
