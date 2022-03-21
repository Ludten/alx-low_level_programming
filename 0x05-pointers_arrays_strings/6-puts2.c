#include "main.h"

/**
 * puts2 - print every other
 *
 * @str: string operand
 *
 */

void puts2(char *str)
{
	int l = 0;
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}
	n = l;

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
