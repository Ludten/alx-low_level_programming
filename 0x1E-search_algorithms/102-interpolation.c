#include "search_algos.h"

/**
 * interpolationSearch - recursively perform the  Interpolation search
 *
 * @array: array to search
 * @low: low
 * @high: high
 * @value: value to be searched for
 * Return: -1 OR index
 */
int interpolationSearch(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	if (low <= high && value >= array[low])
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));

		if (value > array[high])
			printf("Value checked array[%lu] is out of range\n", pos);
		if (pos < high)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
			if (array[pos] < value)
				return (interpolationSearch(array, pos + 1, high, value));
			if (array[pos] > value)
				return (interpolationSearch(array, low, pos - 1, value));
		}
	}
	return (-1);
}

/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 *
 * @array: array to search
 * @size: size of array
 * @value: value to be searched for
 * Return: -1 OR index
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (interpolationSearch(array, 0, size - 1, value));
}
