#include "main.h"

/**
 * _isbase2 - check for case.
 *
 * @c: input variable
 * Return: 0 or 1
 */
int _isbase2(unsigned int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

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
		if (_isbase2(a))
			return (0);
		if (a > 1)
			return (0);
		dec += a * (1 << i);
	}
	return (dec);
}
