#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list
 * of integers using the Jump search algorithm
 *
 * @list: linked list
 * @size: size of list
 * @value: value to be searched for
 * Return: NULL or pointer to node
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, prev, step;
	listint_t *temp;

	if (list == NULL)
		return (NULL);
	step = sqrt(size);
	prev = 0;
	temp = list;
	while (temp->n < value && step < size && temp)
	{
		for (i = prev; temp && (i < step); ++i)
			temp = temp->next;
		printf("Value checked array[%ld] = [%d]\n", temp->index, temp->n);
		prev = step;
		step += sqrt(size);
	}
	step = step < size ? step : size - 1;
	if (value < temp->n)
	{
		for (i = 0; list && (i < prev - sqrt(size)); i++)
			list = list->next;
		printf("Value found between indexes [%ld] and [%ld]\n", list->index, prev);
	}
	else
	{
		for (i = 0; i < prev && (list); i++)
			list = list->next;
		printf("Value found between indexes [%ld] and [%ld]\n", list->index, step);
	}
	while (list && list->n <= value && prev < step)
	{
		printf("Value checked array[%ld] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
