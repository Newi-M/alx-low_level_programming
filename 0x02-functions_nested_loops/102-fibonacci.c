#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	long int j = 1, k = 2, sum;

	printf("%ld", j);
	printf(", %ld", k);

	while (i < 48)
	{
		sum = j + k;
		printf(", %ld", sum);
		j = k;
		k = sum;

		i++;
	}

	printf("\n");

	return (0);
}
