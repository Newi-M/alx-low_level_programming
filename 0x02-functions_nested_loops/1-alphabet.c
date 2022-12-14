#include "main.h"

/**
 * main - print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lc = 'a';

	while (lc <= 'z') 
	{
		_putchar(lc);
		lc++
	}
	putchar('\n');
	
}
