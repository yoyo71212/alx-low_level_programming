#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Prints numbers, followed by a new line
 *
 * @separator: The string to be printed between numbers
 * @n: The number of parameters
 * @...: Variable number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < (int) n; i++)
	{
		if (i == (int) n - 1 || separator == NULL)
		{
			printf("%d", va_arg(args, int));
		}
		else
		{
			printf("%d%s", va_arg(args, int), separator);
		}
	}

	putchar('\n');

	va_end(args);
}
