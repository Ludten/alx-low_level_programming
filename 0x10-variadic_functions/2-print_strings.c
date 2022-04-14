#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - print strings
 *
 * @separator: character separating arguments
 * @n: number of arguments
 * @...: arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
		{
			str = "(nil)";
		}
		if (separator == NULL)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	va_end(ap);

	printf("\n");
}
