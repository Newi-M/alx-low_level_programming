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

	int base = 1;
	unsigned int sum = 0;

	if (b == NULL || (*b != '0' && *b != '1'))
		return (0);
	len = _strlen(b);
	while (len)
	{
		sum += ((b[len - 1] - '0') * base);
		base *= 2;
		len--;
	}

	return (sum);
}
