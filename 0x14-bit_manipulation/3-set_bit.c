#include "main.h"

/**
 * set_bit - set a bit value
 *
 * @n: decimal
 * @index: index
 * Return: bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a, b;

	a = *n;

	if (index <= 31)
	{
		b = ((1 << index) | a);
		*n = b;
		return (1);
	}
	return (-1);
}
