#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: string with name
 * @f: pointer to the function with printf
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
