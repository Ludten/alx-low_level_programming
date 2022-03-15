#include "main.h"
/**
 * print_times_table - n times table
 * @n: argument operand
 */
void print_times_table(int n)
{
	int row, column, s;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				s = (row * column);
				if (column == 0)
					_putchar('0' + s);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (s <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + s);
					}
					else if (s > 9 && s < 100)
					{
						_putchar(' ');
						_putchar('0' + (s / 10));
						_putchar('0' + (s % 10));
					}
					else if (s >= 100)
					{
						_putchar('0' + (s / 100));
						_putchar('0' + ((s / 10) % 10));
						_putchar('0' + (s % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
