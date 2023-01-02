#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where n bytes are copied
 * @src: from where n bytes are copied
 * @n: number of bytes copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
