#include "main.h"
#include <stdio.h>

/**
 * print_number - prints integer
 * @n: number given
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		n *= -1;
		num = n;
		_putchar('-');
	}

	num /= 10;

	if (num != 0)
		print_number(num);

	_putchar((unsigned int) n % 10 + '0');
}
