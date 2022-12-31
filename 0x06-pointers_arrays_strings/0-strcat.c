#include <stdio.h>
#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @src: input string
 * @dest: input string
 *
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; src[i] != '/0'; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '/0';
	return (dest);
}
