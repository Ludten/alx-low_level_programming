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
	if (n == 0)
	{
		return (0);
	}

	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;

	for (i - 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);

}
