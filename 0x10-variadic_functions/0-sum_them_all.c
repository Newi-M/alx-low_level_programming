#include "variadic_functions.h"

/**
 * sum_them_all - sum of all numbers
 * @n: number of arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list m;

	va_start(m, n);

	int i, j;

	long sum;

	for (i = 0; i < n; i++)
	{
		j = va_arg(m, int);

		sum += j;
	}

	va_end(m);

	return (sum);
}



