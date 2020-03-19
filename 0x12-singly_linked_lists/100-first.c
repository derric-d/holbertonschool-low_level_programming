#include "lists.h"
void fast_print(void) __attribute__ ((constructor));
/**
 * fast_print - prints message before main is executed
 */
void fast_print(void)
{
	char *str1 = "You're beat! and yet, you must allow,\n";
	char *str2 = "I bore my house upon my back!\n";

	printf("%s%s", str1, str2);
}
