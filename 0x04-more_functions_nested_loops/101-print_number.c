#include "main.h"

/**
 * print_number - print integer
 *
 * @n: integer
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
	putchar(n % 10 + '0');
}
