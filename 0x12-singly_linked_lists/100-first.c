#include <stdio.h>

/**
 * premain - before the main
 *
 */
void __attribute__ ((constructor)) premain()
{
	char *str = "You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!";

	printf("%s\n", str);
}
