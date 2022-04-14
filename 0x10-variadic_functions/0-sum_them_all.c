#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add up numbers
 *
 * @n: number of arguments
 * @...: arguments
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	if (n == 0)
	return (0);

	return (sum);

}
