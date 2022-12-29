#include "main.h"

/**
 * print_times_table - print times table
 *
 * @n: input number
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, m;
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				printf("%d", m);
				if (j == n)
					continue;
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(' ');
			}
			putchar('\n');
		}
	}
}
