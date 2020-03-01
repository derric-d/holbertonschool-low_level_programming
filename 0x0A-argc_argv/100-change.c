#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	long change, coins;
	int i;
	int coin_list[5] = {25, 10, 5, 2, 1};

	coins = 0;
	change = atoi(argv[1]);
	if (change < 0)
	{
		puts("0");
		return (0);
	}
	if (argc != 2)
	{
		puts("Error\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		while (change - coin_list[i] >= 0)
		{
			coins++;
			change -= coin_list[i];
		}
	}
	printf("%li\n", coins);
	return (0);
}
