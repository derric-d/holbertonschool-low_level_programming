#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc < 3)
		printf("Error\n");
	else if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	
	return (0);
}
