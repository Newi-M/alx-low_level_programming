#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n: an integer
 * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
