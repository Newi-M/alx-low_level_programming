#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: input
 * @dest: input
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int l = 0, i;

	while (dest[l])
		l++;

	for (i = 0; src[i] != '/0'; i++)
	{
		dest[l] = src[i];
		l = l + 1;
	}
	dest[l] = '/0';
	return (dest);
}
