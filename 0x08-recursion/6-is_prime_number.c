#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - to know if a number is prime
 * @n: number given
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if number is prime
 * @n: number given
 * @i: itration number
 *
 * Return: 1 or 0
 */
int check_prime(int n, int i)
{
	if ((n <= 1) || (((n % i) == 0) && (i > 1))
		return (0);
	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
