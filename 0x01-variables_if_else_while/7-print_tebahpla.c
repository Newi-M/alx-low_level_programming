#include <stdio.h>

/**
 * main - prints lower case characters in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)

		putchar(letter);

	putchar('\n');

	return (0);
}
