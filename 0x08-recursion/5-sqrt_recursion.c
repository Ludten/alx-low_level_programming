#include "main.h"

int sq_rt(int n, int i);

/**
 * _sqrt_recursion - the natural square root of a number
 *
 * @n: input variable
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sq_rt(n, 0));
}

/**
 * sq_rt - find the natural square root of a number
 *
 * @n: input variable
 *
 * @i: iterator
 *
 * Return: square root
 */
int sq_rt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sq_rt(n, i + 1));
}
