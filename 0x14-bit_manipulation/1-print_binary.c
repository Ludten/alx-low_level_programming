#include "main.h"

/**
 * print_binary - print converted decimal to
 * binary
 *
 * @n: decimal to be converted
 */
void print_binary(unsigned long int n)
{
	if (n <= 1)
	{
		_putchar(n + '0');
		return;
	}

	if (n != 0)
	{
		print_binary(n >> 1);
		n & 1 ? _putchar('1') : _putchar('0');
	}
}
