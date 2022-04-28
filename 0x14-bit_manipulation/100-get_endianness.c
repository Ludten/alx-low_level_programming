#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int n;

	int x = 1;

	char *y = (char *)&x;

	n = *y + 48;

	return (n);
}
