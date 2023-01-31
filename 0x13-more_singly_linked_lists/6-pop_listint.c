#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: linked list
 *
 * Return: n, the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int n;

	if (*head == NULL)
		return (0);
	while (*head != NULL)
	{
		temp = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = temp;
	}

	return (n);
}
