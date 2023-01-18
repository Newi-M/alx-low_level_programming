#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name
 * @f: pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{

	f(name);
}
