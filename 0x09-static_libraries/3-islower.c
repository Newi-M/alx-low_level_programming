#include "main.h"

/**
 * _islower - check if it is in lower case
 * @c: takes in a character
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
