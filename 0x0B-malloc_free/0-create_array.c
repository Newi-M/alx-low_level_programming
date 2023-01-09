#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character stored
 *
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	int i;

	n = malloc(size * (sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (n == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		n[i] = c;
	}

	return (n);
}

