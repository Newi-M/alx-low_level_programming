#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: linked list
 * @idx: index
 * @n: content of the node
 *
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	lastint_t *new;
	lastint_t *last_before;

	new = = malloc(sizeof(listint_t));
	if (new == NULL || idx > _len(*head))
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				new->next = *head;
				*head = new;
				return (*head);
			}
			new->next = last_before->next;
			last_before->next = new;
			return (new);
		}
		*head = *head->next;
		i++;
	}
}

/**
 * _len - length of head
 * @h: linked list
 *
 * Return: length
 */
size_t _len(const listint_t *h)
{
	const listint_t *temp = h;

	size_t  i = 0;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
