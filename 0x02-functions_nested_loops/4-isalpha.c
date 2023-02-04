#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: a character
 * Return: 1 if letter, lower or upper case; 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
