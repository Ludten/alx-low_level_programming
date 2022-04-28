#include "main.h"

/**
 * _isdigit - check for case.
 *
 * @c: input variable
 * Return: 0 or 1
 */
int _isdigit(unsigned int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * _pow - solve exp
 *
 * @a: base
 * @b: exp
 * Return: value
 */
unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int i, c;

	if (b == 0)
		return (1);
	c = 1;

	for (i = 0; i < b; i++)
		c *= a;
	return (c);
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
		if (_isdigit(a))
			return (0);
		dec += a * (_pow(2, i));
	}
	return (dec);
}
