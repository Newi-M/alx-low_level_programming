#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array
 * @size: size of array
 * @action: pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
