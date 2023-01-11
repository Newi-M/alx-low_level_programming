#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free two dimensional array
 * @grid: array name
 * @height: height
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
	}

	free(grid);
}
