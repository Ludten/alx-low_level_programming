#include "main.h"
/**
 * print_times_table - n times table
 * @n: argument operand
 */
void print_times_table(int n)
{
	int i, j, s;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0' + s);
			for (j = 0; j <= n; j++)
			{
				s = i * j;
				_putchar(',');
				if (s <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + s);
				}
				else if (s > 9 && s < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (s / 10));
					_putchar('0' + (s % 10));
				}
				else if (s > 99)
				{
					_putchar('0' + (s / 100));
					_putchar('0' + ((s / 10) % 10));
					_putchar('0' + (s % 10));
				}
			}
			_putchar('\n');
		}
	}
}
