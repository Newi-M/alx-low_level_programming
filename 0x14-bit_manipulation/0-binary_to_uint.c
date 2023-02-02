#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string of 0 & 1
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, m, sum, len;
	char *c;

	if (*b == NULL)
		return (0);
	len = _strlen(*b);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == 48 || b[i] == 49)
		{
			m = _pow(2, i);
			c[i] = ((m) * b[i]);
		}
		else
			return (0);
	}
	for (i = 0; c[i] != 0; i++)
	{
		sum += c[i];
	}

	return (sum);
}
