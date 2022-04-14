#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - print everything
 *
 * @format: different foramts
 * @...: arguments
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char *str, *ptr = "";

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", ptr, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", ptr, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", ptr, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", ptr, str);
					break;
				default:
					i++;
					continue;
			}
			ptr = ", ";
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
