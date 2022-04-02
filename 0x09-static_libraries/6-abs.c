#include "main.h"

/**
 * _abs - Absolute.
 *
 * @n: passed variable
 *
 * Return: p
 */

int _abs(int n)
{
	int p;

	if (n >= 0)
	{
		p = n;
	}
	else
	{
		p = n * -1;
	}

	return (p);
}
