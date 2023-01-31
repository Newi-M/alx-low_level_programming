#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: linked list
 * @index: index of node
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temp;

	while (*head != NULL)
	{
		if (i == index)
		{
			temp = *head->next;
			free(*head);
			*head = temp;
			return (1);
		}
		else
		{
			*head = *head->next;
		}

		i++;
	}

	return (-1);
}
