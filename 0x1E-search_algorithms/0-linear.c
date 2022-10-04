#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: array to search
 * @size: size of array
 * @value: value to be searched for
 * Return: -1 OR index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
