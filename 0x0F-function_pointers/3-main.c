#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int int_one, int_two;

	char *operator;
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int_one = atoi(argv[1]);
	int_two = atoi(argv[3]);
	operator = argv[2];

	if (*operator != '+' && *operator != '/'
		&& *operator != '%' && *operator != '*' && *operator != '-')
	{
		printf("Error\n");
		exit(99);
	}

	fptr = get_op_func(operator);
	if (fptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fptr(int_one, int_two));
	return (0);
}
