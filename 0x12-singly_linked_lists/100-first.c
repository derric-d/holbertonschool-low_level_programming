#include "lists.h"
void fast_print(void) __attribute__ ((constructor));
/**
 * fast_print - prints message before main is executed
 */
void fast_print(void)
{
	char *str = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", str);
}
