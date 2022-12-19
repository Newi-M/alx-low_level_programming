#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
