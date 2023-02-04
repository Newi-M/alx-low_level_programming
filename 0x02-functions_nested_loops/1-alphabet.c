#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case
 * Return: nothing
 */
void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
}
