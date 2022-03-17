#include "main.h"

/**
 * _isupper - check for case.
 *
 * @c: input variable
 * Return: n
 */

int _isupper(int c)
{
	int n;

	if (c >= 'A' && c <= 'Z')
		n = 1;
	else
		n = 0;

	return (n);
}
