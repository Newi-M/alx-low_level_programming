#include <stdio.h>

/**
 * main - prints fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 0;

	long int num1 = 1, num2 = 2, sum;

	printf("%ld", num1);
	printf(", %ld", num2);

	while (num < 48)
	{
		sum = num1 + num2;
		printf(", %ld", sum);
		num2 = num1;
		num1 = sum;

		num++;
	}

	printf("\n");

	return (0);
}
