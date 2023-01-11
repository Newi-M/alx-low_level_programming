#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != 0; i++)
	{
		;
	}
	for (l = 0; s2[l] != 0; l++)
	{
		;
	}

	p = malloc((l + i + 1) * (sizeof(char)));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
	{
		p[i] = s1[i];
	}

	j = 0;

	for (; s2[j] != 0; i++)
	{
		p[i] = s2[j];
		j++;
	}

	p[i] = '\0';
	return (p);
}
