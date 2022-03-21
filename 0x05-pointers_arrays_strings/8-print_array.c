#include <stdio.h>
#include "main.h"

/**
 * print_array - print array
 *
 * @a: array operand
 *
 * @n: argument operand
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i < n)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
