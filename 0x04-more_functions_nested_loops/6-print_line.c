#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line
 * @n: takes in integer
 * Return: returns nothing
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
