#include <stdio.h>
#include <math.h>

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	long i, j;
	long n = 612852475143;
	double square = sqrt(n);

	for (i = 1; i <= square; i++)
	{
		if (n % i == 0)
		{
			j = n / i;
		}
	}
	printf("%ld\n", j);

	return (0);
}
