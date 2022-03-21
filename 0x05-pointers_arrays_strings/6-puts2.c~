#include "main.h"

/**
 * rev_string - rev string
 *
 * @s: string operand
 *
 */

void rev_string(char *s)
{
	int i, n, temp;
	int l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}

	n = l;

	for (i = 0; i < n / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
