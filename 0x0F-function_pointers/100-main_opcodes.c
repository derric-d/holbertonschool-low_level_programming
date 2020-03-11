#include "function_pointers.h"

/**
 * main - entry point
 * @argc: num args
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int bytes;
	char *p;

	p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(2);
	}
	bytes = atoi(argv[1]);

	while (bytes--)
	{
		/*
		*0 - left pad w/zero 2 - minimum 2 ints in result
		*h - interpret as short int x - unsigned hex
		*/
		printf("%02hhx%s", *p++, bytes ? " " : "\n");
	}
	return (0);
}
