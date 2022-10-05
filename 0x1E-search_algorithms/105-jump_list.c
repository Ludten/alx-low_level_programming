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
	size_t i, step;
	listint_t *temp = list;

	if (list == NULL)
		return (NULL);
	step = sqrt((double) size), i = list->index + step;
	for (; list != NULL; list = list->next)
	{
		if (list->index == i)
		{
			printf("Value checked at index [%ld] = [%d]\n",
					list->index, list->n);
			if (list->n < value && list->next)
				temp = list, i = i + step;
			else
				break;
			i = i < size ? i : size - 1;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			temp->index, i);
	for (; temp && temp->index <= i &&
			temp->n <= value; temp = temp->next)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				temp->index, temp->n);
		if (temp->n == value)
			return (temp);
	}
	return (NULL);
}
