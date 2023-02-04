#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n: an integer
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
