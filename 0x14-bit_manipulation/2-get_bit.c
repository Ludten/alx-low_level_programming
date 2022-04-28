#include "main.h"

/**
 * get_bit - Get the bit object
 *
 * @n: decimal
 * @index: index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a, b, c;

	if (index <= 31)
	{
		a = 1 << index;
		b = n & a;
		c = b >> index;
		return (c);
	}
	return (-1);
}
