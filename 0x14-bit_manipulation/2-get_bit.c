#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	int a, b, c;

	if (index >= 0 && index <= 31)
	{
		a = 1 << index;
		b = n & a;
		c = b >> index;
		return (c);
	}
	return (-1);
}
