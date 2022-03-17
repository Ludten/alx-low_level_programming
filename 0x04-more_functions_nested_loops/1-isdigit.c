#include "main.h"

/**
 * _isdigit - check for case.
 *
 * @c: input variable
 * Return: n
 */

int _isdigit(int c)
{
	int n;

	if (c >= '0' && c <= '9')
		n = 1;
	else
		n = 0;

	return (n);
}
