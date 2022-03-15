#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers from n
 *
 * @n: argument variable
 *
 */

void print_to_98(int n)
{
	int i;

	i = n;

	while (i < 98)
	{
		printf("%d, ", i);
		i++;
	}

	while (i > 98)
	{
		printf("%d, ", i);
		i--;
	}
	printf("98\n");
}
