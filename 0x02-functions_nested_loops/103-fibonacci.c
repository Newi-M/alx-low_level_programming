#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	long num1 = 1, num2 = 2, fibonacci_sum, sum = 0;

	while (num2 <= 4000000)
	{
		fibonacci_sum = num1 + num2;
		num1 = num2;
		num2 = fibonacci_sum;

		if (num1 % 2 == 0)
			sum = sum + num1;

		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
