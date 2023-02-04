#include "main.h"

/**
 * print_line - draws a straight line
 * @n: integer
 * Return: nothing
 */
void print_line(int n)
{
	while (n > 0)
	{
		putchar('_');
		n--;
	}
	putchar('\n');
}
