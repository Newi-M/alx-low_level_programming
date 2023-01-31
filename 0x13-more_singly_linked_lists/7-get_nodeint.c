#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: linked list
 * @index: index of the node
 *
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;

	if (head != NULL)
	{
		for (; head != NULL; i++)
		{
			if (i == index)
			{
				return (head);
			}

			head = head->next;
		}
	}
	return (NULL);
}
