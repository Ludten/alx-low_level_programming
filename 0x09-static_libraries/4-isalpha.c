#include "main.h"

/**
 * _isalpha - check for case.
 *
 * @c: input variable
 * Return: n
 */

int _isalpha(int c)
{
	int n;

	if (c >= 'A' && c <= 'z')
		n = 1;
	else
		n = 0;

	return (n);
}
