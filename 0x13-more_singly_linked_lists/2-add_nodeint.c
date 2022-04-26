#include "lists.h"

/**
 * add_nodeint - add node to start of list
 *
 * @head: head
 * @n: data to be added
 * Return: Address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
