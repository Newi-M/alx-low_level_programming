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
	int i, j, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
			else
			{
				sum += atoi(argv[i][j]);
			}
		}
	}

	printf("%d\n", sum);
	return (0);
}
