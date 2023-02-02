#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string of 0 & 1
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	int i;

	int j = 0;

	unsigned int sum = 0;

	if (b == NULL || (b != '0' && b != '1'))
		return (0);
	len = _strlen(b);
	for (i = (len - 1); i >= 0; i--)
	{
		sum += ((2 * *j) * (b[i] - '0'));
		j++;
	}

	return (sum);
}
