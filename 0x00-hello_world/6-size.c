#include <stdio.h>

int main(void)
{
	char * szof = "Size of ";
	int charsize = sizeof(char);
	int intsize = sizeof(int);
	int longintsize = sizeof(long int);
	int longlongintsize = sizeof(long long int);
	int floatsize = sizeof(float);
	printf("%s a char: %d bytes(s)\n", szof, charsize);
	printf("%s an int: %d bytes(s)\n", szof, intsize);
	printf("%s a long int: %d bytes(s)\n", szof, longintsize);
	printf("%s a long long int: %d bytes(s)\n", szof, longlongintsize);
	printf("%s a float: %d bytes(s)\n", szof, floatsize);
	printf("%s a char: %d bytes(s)\n", szof, charsize);
	return(0);
}
