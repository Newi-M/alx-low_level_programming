#include <stdlib.h>
#include "main.h"

/**
 * array_range - ...
 * @min: ...
 * @max: ...
 *
 * Return: integer value
 */
int *array_range(int min, int max)
{
	int *p, i = 0;

	if (min > max)
		return (NULL);

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}

	return (p);
}
