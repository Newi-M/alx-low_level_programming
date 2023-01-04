#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - Returns if a number is prime
 * @n: the number to be checked
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}

/**
 * _prime - Check if number is prime
 * @n: the number to be checked
 * @i: itration number
 *
 * Return: 1 or 0
 */
int _prime(int n, int i)
{
	if ((n <= 1) || (n % i == 0 && i > 1))
		return (0);

	if ((n / i) < i)
		return (1);

	return (_prime(n, i + 1));
}
