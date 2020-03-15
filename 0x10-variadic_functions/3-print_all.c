#include "variadic_functions.h"

/**
 * print_all - print anything passed in frm string
 * @format: format string to parse and print out
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int i;
	int no_comma;

	va_start(args, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				no_comma = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				no_comma = 0;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				no_comma = 0;
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				no_comma = 0;
				break;
			default:
				no_comma = 1;
				break;
		}
		if (format[i + 1] != 0 && no_comma == 0)
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
