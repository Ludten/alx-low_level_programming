#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 *
 * @min: minimum operand
 *
 * @max: maximum operand
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
