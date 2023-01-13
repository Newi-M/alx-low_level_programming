#include <stdlib.h>
#include "main.h"

/**
 * _calloc - ...
 * @nmemb: ...
 * @size: ...
 *
 * Return: ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	for (; i < l; i++)
	{
		p[i] = 0;
	}

	return (p);
}
