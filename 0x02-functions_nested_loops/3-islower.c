#include "main.h"

/**
 * _islower - check if it is in lower case
 * @c: a character
 * Return: 0 (Success)
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
