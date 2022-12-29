#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			sum = j + k;
			printf(", %ld", sum);
			j = k;
			k = sum;
		}
		i++;
	}
	printf("\n");
	return (0);
}
