#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: linked list
 * @idx: index
 * @n: data
 *
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *j, *k;

	j = malloc(sizeof(listint_t));
	if (j == NULL)
	{
		return (NULL);
	}
	j->n = n;
	j->next = NULL;

	i = *head;
	if (i == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < idx - 1; i++)
	{
		i = i->next;
	}
	j->next = i->next;
	i->next = j;

	return (j);
}
