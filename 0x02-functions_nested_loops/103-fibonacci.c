#include <stdio.h>

/**
 * main - print sum ofeven fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long n1 = 1, n2 = 2, fn, sum = 0;

	while (n2 <= 4000000)
	{
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;

		if (n1 % 2 == 0)
			sum = sum + n1;

		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
