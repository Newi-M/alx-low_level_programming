#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns pointer to two dimensional array
 * @width: width
 * @height: height
 *
 * Return: pointer or null
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(p[j]);
			}

			free(p);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			p[k][l] = 0;
		}
	}

	return (p);
}


