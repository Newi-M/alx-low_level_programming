#include "main.h"

/**
 * print_times_table - Prints a multiplication table
 * @n: number
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int num1, num2, product;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				product = num1 * num2;
				if (product > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					if (num2 != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(product + '0');
				}
			}
			_putchar('\n');
		}
	}
}
