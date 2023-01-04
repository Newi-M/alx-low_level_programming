#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns natural square root
 * @n: number given
 *
 * Return: -1 or natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - find sqrt of n
 * @i: itration number
 * @n: number given
 *
 * Return: -1 or natural sqrt
 */
int _sqrt(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
		return (-1);
	if (sqr == n)
		return (i);

	return (_sqrt(n, i + 1));
}
