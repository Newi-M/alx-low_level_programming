#include "lists.h"

/**
 * print_list - print list
 * @h: linked list
 * 
 * Return: number of nodes
 */
 size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
 }
