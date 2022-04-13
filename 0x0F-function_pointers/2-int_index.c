#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - find array element
 * @array: array of numbers
 * @size: size of the array
 * @cmp: pointer to the function
 *
 * Return: i or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	return (-1);

	if (array != NULL && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)))
			return (i);
		}
	}
	return (-1);
}
