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
	size_t step, prev;

	if (!array)
		return (-1);

	prev = 0;
	step = sqrt(size);
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	while (array[step] < value && (prev < size - 1))
	{
		prev = step;
		if (prev < size - 1)
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		step += sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	while (array[prev] <= value && prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
		{
			return (prev);
		}
		prev++;
	}

	return (-1);
}
