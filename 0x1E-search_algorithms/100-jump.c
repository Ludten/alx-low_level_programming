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
	size_t b, min, step;

	if (array == NULL)
		return (-1);
	step = sqrt((double) size);
	for (b = min = 0; min < size && array[min] < value; )
	{
		printf("Value checked array[%ld] = [%d]\n", min, array[min]);
		b = min;
		min = min + step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", b, min);
	min = min < size ? min : size - 1;
	for ( ; b <= min && array[b] <= value; b++)
	{
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		if (array[b] == value)
			return (b);
	}
	return (-1);
}
