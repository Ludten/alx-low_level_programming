#include "search_algos.h"

/**
 * min - find minimum of two numbers
 *
 * @a: first
 * @b: second
 * Return: Min
 */
size_t min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

/**
 * binarySearch - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @arr: array to search
 * @l: Left index
 * @r: right index
 * @x: Value
 * Return: -1 OR index
 */
int binarySearch(int *arr, int l, int r, int x)
{
	int mid, i;

	if (r >= l)
	{

		printf("Searching in array:");
		for (i = l; i <= r; i++)
		{
			if (i == r)
				printf(" %d\n", arr[i]);
			else
				printf(" %d,", arr[i]);
		}

		mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return (mid);

		if (arr[mid] > x)
			return (binarySearch(arr, l, mid - 1, x));

		return (binarySearch(arr, mid + 1, r, x));
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 *
 * @array: array to search
 * @size: size of array
 * @value: value to be searched for
 * Return: -1 OR index
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (!array)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
	bound / 2, min(bound, size - 1));
	return (binarySearch(array, bound / 2, min(bound, size - 1), value));
}
