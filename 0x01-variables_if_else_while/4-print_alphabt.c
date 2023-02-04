#include <stdio.h>

/**
 * main - prints alphabet in lower case
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lower_character;

	for (lower_character = 'a'; lower_character <= 'z'; lower_character++)
	{
		if (lower_character != 'e' && lower_character != 'q')
			putchar(lower_character);
	}

	putchar('\n');

	return (0);
}
