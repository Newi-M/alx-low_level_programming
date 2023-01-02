#include "main.h"

/**
 * _strchr - locate character
 * @s: string
 * @c: character
 *
 * Return: string or null
 */
char *_strchr(char *s, char c)
{
	int n = 0, m;

	while (s[n] != 0)
	{
		n++;
	}

	for (m = 0; m <= n; m++)
	{
		s = s + m;
		return (s);
	}

	return ('\0');
}
