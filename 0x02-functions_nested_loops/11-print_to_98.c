#include "main.h"

/**
 * print_to_98 - print numbers from n
 *
 * @n: argument variable
 *
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n + '0');

		if (n < 98)
		{
			_putchar(' ');
			_putchar(',');
		}
		n++;
	}
}
