#include "main.h"
/**
 * print_line - print lines
 *
 * @n: argument operand
 * Return: Always 0.
 */

void print_line(int n)
{
	int c = 0;

	while (c <= n)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		c++;
	}
	_putchar('\n');
}
