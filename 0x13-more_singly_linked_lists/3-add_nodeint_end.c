#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head
 * @n: number to be used as content (data)
 *
 * Return:  the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	listint_t *last_before = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = NULL;
	}
	if (last_before == NULL)
	{
		*head = new;
	}
	else
	{
		while (last_before->next != NULL)
			last_before = last_before->next;
		last_before->next = new;
	}
	return (new);
}
