#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - print array elements
 * @array: array of numbers
 * @size: size of the array
 * @action: pointer to the function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
