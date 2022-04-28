#include "main.h"

/**
 * binary_to_uint - convert string binary to
 * decimal
 *
 * @b: string with possible binary
 * Return: Decimal or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, a, len, dec;

	if (b == NULL)
		return (0);
	len = strlen(b);
	dec = 0;

	for (i = 0; i < len; i++)
	{
		a = (b[len - i - 1]) - 48;
		if (a == 1 || a == 0)
			return (0);
		dec += a * (1 << i);
	}
	return (dec);
}
