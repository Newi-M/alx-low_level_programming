#include "function_pointers.h"

/**
 * int_index - searches for an integer match
 * @array: array
 * @size: size
 * @cmp: pointer
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}

	return (-1);
}
