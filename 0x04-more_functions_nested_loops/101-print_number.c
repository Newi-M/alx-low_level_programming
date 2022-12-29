#include "main.h"

/**
 * print_number - print integers
 *
 * @n: input integer
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		n = n * -1;
		m = n;
		_putchar('-');
	}

	m = m / 10;

	if (m != 0)
		print_number(m);

	_putchar(n % 10 + '0');
}
