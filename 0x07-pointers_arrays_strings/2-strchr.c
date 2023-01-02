#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be located
 *
 * Return: string or null character
 */
char *_strchr(char *s, char c)
{
	int m, n;

	m = 0;

	while (s[m])
	{
		m++;
	}

	for (n = 0; n <= m; n++)
	{
		if (c == s[n])
		{
			s += n;
			return (s);
		}
	}
	return ('/0')
}
