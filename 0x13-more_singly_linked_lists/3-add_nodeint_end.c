#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: linked list
 * @n: data
 *
 * Return:  the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last_before = *head;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*last_before == NULL)
	{
		*head = new;
	}
	else
	{
		while (last_before->next != NULL)
			last_before = last_before->next;
		*head = last_before;
	}

	return (*head);
}
