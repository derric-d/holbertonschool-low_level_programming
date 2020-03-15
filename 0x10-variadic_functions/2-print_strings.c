#include "variadic_functions.h"

/**
 * print_strings - prints strings with separator
 * @separator: format character to print
 * @n: list of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *arg_string;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg_string = va_arg(args, char *);
		if (arg_string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", arg_string);
		}
		if (i + 1 < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
