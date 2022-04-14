#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_numbers - print numbers
 *
 * @separator: character separating arguments
 * @n: number of arguments
 * @...: arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
	return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
		{
			if (separator == NULL)
			printf(" ");
			else
			printf("%c ", *separator);
		}
	}
	printf("\n");

	va_end(ap);
}
