#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 * Jump search algorithm
 *
 * @array: array to search
 * @size: size of array
 * @value: value to be searched for
 * Return: -1 OR index
 */
int jump_search(int *array, size_t size, int value)
{
	size_t b, step, prev;

	if (!array)
		return (-1);

	b = sqrt((double)size);

	for (step = prev = 0; array[step] < value && (step < size);)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += b;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	if (step > size)
		step = size - 1;

	for ( ; array[prev] <= value && prev <= step; prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
