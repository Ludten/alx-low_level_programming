#include "main.h"

/**
 * puts_half - print half string
 *
 * @str: string operand
 *
 */

void puts_half(char *str)
{
	int i, x, n;
	int l = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}

	x = l;

	if (x % 2 == 0)
	{
		n = l / 2;

		for (i = n; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = ((l + 1) / 2);

		for (i = n; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
