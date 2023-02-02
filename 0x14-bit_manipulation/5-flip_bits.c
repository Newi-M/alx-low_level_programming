#include "main.h"

/**
*flip_bits - gets the number of bits to flip to get from n to m
*@n: initial number
*@m: final number
*
*Return: the number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = n ^ m;
	int i = 0;

	while (j)
	{
		if (j & 1)
			i++;
		j >>= 1;
	}
	return (i);
}
