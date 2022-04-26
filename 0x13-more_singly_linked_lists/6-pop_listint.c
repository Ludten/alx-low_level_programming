#include "lists.h"

/**
 * pop_listint - remove the head node of
 * the list
 *
 * @head: head
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (data);
}
