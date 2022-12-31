#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int a, b, c, r, l;

	a = 0;

	while (s1[a])
	{
		a++;
	}

	b = 0;

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		l = a;
	}
	else
	{
		l = b;
	}

	while (c <= l)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}
		c++;
	}
	return (r);
}
