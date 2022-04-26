#include "lists.h"

/**
 * reverse_listint - reverse list
 *
 * @head: head
 * Return: pointer to head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first;
	listint_t *rest;

	if (*head == NULL)
		return (NULL);

	first = *head;
	rest = first->next;
	if (rest == NULL)
		return (*head);
	reverse_listint(&rest);

	first->next->next = first;
	first->next = NULL;
	*head = rest;
	return (*head);
}
