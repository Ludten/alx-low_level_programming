#include "main.h"
/**
 * print_diagonal - print diagonal lines
 *
 * @n: argument operand
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			if (x > 1)
			{
				for (y = 1; y < x; y++)
					_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
