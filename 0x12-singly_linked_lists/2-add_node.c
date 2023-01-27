#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: ...
 * @str: ...
 *
 * Return: address of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	if (head != NULL && str != NULL)
	{
		n = malloc(sizeof(list_t));
		if (n == NULL)
			return (NULL);

		n->str = strdup(str);
		n->len = _strlen(str);
		n->next = *head;

		*head = n;

		return (n);
	}

	return (0);
}

/**
 * _strlen - Returns the length of a string
 * @str: String to be counted
 *
 * Return: String length
 */
int _strlen(const char *str)
{
	int i = 0;

	while (*str)
	{
		str++;
		i++;
	}

	return (i);
}
