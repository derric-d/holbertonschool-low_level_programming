#include "function_pointers.h"

/**
 * print_name - prints name given
 * @name: name given
 * @f: function given to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	void (*fptr)(char *);

	if (name == NULL || f == NULL)
		return (NULL);
	fptr = f;
	fptr(name);
}
