#include <stdio.h>

/**
 * main - entry point
 * @argc: argv count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
