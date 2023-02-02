#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 & 1s
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	int len = 0, base = 1;

	if (!check_string(b))
		return (0);

	while (b[len] != '\0')
		len++;

	while (len)
	{
		sum += ((b[len - 1] - '0') * base);
		base *= 2;
		len--;
	}
	return (sum);
}

/**
 * check_string - checks if a string has only 0's and 1's
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int check_string(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}
