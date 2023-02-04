#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints if the number is positive, negative or 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	srand(time(0));
	num = rand() - RAND_MAX / 2;

	if (num == 0)
	{
		printf("%d is zero\n", num);
	}
	else if (num > 0)
	{
		printf("%d is positive\n", num);
	}
	else
	{
		printf("%d is negative\n", num);
	}

	return (0);
}

