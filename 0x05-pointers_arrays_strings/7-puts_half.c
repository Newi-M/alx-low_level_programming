#include "main.h"

/**
 * puts_half - prints the last half of a string
 *
 * @str: string
 *
 * Return - none
 */

void puts_half(char *str)
{
	int len, i;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len % 2 == 0)
	{
		len = len / 2;
	}
	else
	{
		len = (len + 1) / 2;
	}

	for (; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}

	_putchar('\n');
}
