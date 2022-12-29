#include <stdio.h>

/**
 * main - print the first 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long int n1 = 1, n2 = 2, fn;

	while (i < 98)
	{
		if (i == 0)
			printf("%lu", n1);
		else if (i == 1)
			printf(", %lu", n2);
		else
		{
			fn = n1 + n2;
			printf(", %lu", fn);
			n1 = n2;
			n2 = fn;
		}
		i++;
	}
	printf("\n");
	return (0);
}
