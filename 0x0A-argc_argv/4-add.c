#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds numbers
 * @argc: size
 * @argv: array
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]) == 0)
		{
			puts("Error");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
