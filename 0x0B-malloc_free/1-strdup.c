#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, l;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != 0; i++)
	{
		l++;
	}

	ptr = (char *)malloc((l + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != 0; i++)
	{
		ptr[i] = str[i];
	}

	ptr[i] = '\0';

	return (ptr);
}


