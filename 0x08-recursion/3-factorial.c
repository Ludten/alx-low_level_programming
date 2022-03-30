#include "main.h"

/**
 * factorial - factorial of a number
 *
 * @n: input variable
 *
 * Return: factorial Success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
