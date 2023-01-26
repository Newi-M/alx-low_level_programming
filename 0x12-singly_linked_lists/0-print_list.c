#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[%d] %s", 0, (nil));
		else
			printf("[%d] %s", h->len, h->str);

		h->next;

		i++;
	}

	return (i);
}
