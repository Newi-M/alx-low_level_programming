#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: size
 * @argv: array
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, j, change;
	int coins[] = {25, 10, 5, 2, 1};

	change = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	j = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (j < 0)
			break;
		while (j >= coins[i])
		{
			change++;
			j -= coins[i];
		}
	}

	printf("%d\n", change);
	return (0);
}
