#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
unsigned int _strlen(char *c);
unsigned int _pow(unsigned int i, unsigned int j);

/**
 * _strlen - length of string
 * @c: string
 *
 * Return: length
 */
unsigned int _strlen(char *c)
{
	unsigned int len = 0;

	while (*c != 0)
	{
		len++;
	}

	return (len);
}

/**
 * _pow - calculate power
 * @i: base
 * @j: exponent
 *
 * Return: answer
 */
unsigned int _pow(unsigned int i, unsigned int j)
{
	unsigned int product  = 1;

	for (j; j > 0; j--)
	{
		product = product * i;
	}
	if (j == 0)
		return (1);

	return (product);
}

#endif
