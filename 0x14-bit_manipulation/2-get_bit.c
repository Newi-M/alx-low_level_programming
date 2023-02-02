#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: number
 *
 * Return: value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (~n << index)) != 0);
}
