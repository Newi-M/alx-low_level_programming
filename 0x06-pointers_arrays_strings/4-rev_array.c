#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: An array of integers
 * @n: Number of elements to swap
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int *p, i, j, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		j = a[k];
		a[k] = *p;
		*p = j;
		p--;
	}
}
