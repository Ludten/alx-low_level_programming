#include "main.h"

/**
 * print_number - print an integer, without using long, arrays, or pointers
 *
 * @n: argument operand
 */

void print_number(int n)
{
	unsigned int a, b;
	unsigned int pos = n;
	double c = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			pos = n * -1;
			_putchar('-');
		}

		while (c <= pos)
			c *= 10;
		a = c / 10;

		while (a >= 1)
		{
			b = pos / a;
			_putchar(b + '0');
			pos = (pos - (a * b));
			a /= 10;
		}
	}
}
