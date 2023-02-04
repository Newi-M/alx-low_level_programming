#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if ((num == 50) || (num == 52))
		{
			continue;
		}
		putchar(num);
	}
	putchar(10);
}
