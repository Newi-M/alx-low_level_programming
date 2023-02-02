#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @n: n is a pointer to the number
 * @index: the index of the bit to set
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || (index >= (sizeof(unsigned long int) * 8)))
		return (-1);

	*n |= 1UL << index;
	return (1);
}
