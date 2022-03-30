#include "main.h"

/**
 * _pow_recursion - exponential of a number
 *
 * @x: input variable
 *
 * @y: expon variable
 *
 * Return: pow Success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
