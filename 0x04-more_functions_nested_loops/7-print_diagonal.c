#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *
 * @n: input number
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	while (n > 0)
	{
		putchar('\');
		n--;
	}
	putchar('\n');
}
