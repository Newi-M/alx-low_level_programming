#include "main.h"

/**
 * main - print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	putchar('\n');
	return (0);
}
