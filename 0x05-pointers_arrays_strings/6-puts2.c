#include "main.h"

/**
 * puts2 - print every other
 *
 * @str: string operand
 *
 */

void puts2(char *str)
{
	int i, j;

	_putchar(str[0]);

	for (i = 0, j = 2; str[i + j] != 0; i++, j++)
	{

		_putchar(str[i + j]);
	}
	_putchar('\n');
}
