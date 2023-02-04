#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num, sum = 0;

	while (num < 1024)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
