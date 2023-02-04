#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long i, quotient;
	long num = 612852475143;
	double _sqrt = sqrt(num);

	for (i = 1; i < _sqrt; i++)
	{
		if (num % i == 0)
		{
			quotient = num / i;
		}
	}
	printf("%ld\n", quotient);

	return (0);
}
