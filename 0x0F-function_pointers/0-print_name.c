#include "function_pointers.h"
/**
 * print_name - Prints a name
 *
 * @name: The name
 * @f: Pointer to the function that will print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
