#include "main.h"

/**
 * print_diagsums - print sums of square matrix diagonals
 *
 * @a: array operand
 *
 * @size: size of column
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j, x, y;

	for(i = 0, j = 0; i < size; i++, j++)
	{
		x += a[i][j];
	}

	for(i = 0, j = size - 1; i < size; i++, j--)
	{
		y += a[i][j];
	}
	printf("%d, %d\n", x, y);
}
