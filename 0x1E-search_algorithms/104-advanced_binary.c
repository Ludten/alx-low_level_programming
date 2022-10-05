#include "search_algos.h"

/**
 * first - Recursively find the first occurrence
 *
 * @array: array to search
 * @low: Left index
 * @high: right index
 * @x: Value
 * Return: -1 OR index
 */
int first(int *array, size_t low, size_t high, int x)
{
	size_t i, mid;

	if (high >= low)
	{
		printf("Searching in array:");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf(" %d\n", array[i]);
			else
				printf(" %d,", array[i]);
		}

		mid = low + (high - low) / 2;

		if ((mid == 0 || x > array[mid - 1]) && array[mid] == x)
			return (mid);
		else if (x > array[mid])
			return (first(array, (mid + 1), high, x));
		else
			return (first(array, low, mid, x));
	}
	return (-1);
}

/**
 * advanced_binary - binary search to find the first
 * occurrence
 *
 * @array: array to search
 * @size: size of array
 * @value: value to be searched for
 * Return: -1 OR index
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (first(array, 0, size - 1, value));
}
