#include "main.h"

/**
 * print_binary - print converted decimal to
 * binary
 *
 * @n: decimal to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = n;

	if (n <= 1)
	{
		_putchar(n + '0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask = mask >> 1; /* Right Shift */
	}
}
