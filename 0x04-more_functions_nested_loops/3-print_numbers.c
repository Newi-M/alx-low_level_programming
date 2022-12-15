#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: returns nothing
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
