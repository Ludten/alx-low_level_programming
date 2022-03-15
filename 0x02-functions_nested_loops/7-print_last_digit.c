#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @c: passed variable
 *
 * Return: p.
 */

int print_last_digit(int c)
{
	unsigned int p;

	if (c >= 0)
	{
		p = (c % 10);
		_putchar(p + '0');
	}
	else
	{
		unsigned int n;

		n = c < 0 ? -((unsigned int)(c)) : +((unsigned int)(c));

		p = (n % 10);

		_putchar(p + '0');
	}

	return (p);
}
