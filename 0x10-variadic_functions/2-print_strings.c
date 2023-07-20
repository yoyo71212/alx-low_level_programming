#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Prints strings, followed by a new line
 *
 * @separator: The string to be printed between the strings
 * @n: The number of parameters
 * @...: Variable number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < (int) n; i++)
	{
		const char *curr;

		curr = va_arg(args, const char *);
		if (curr == NULL)
		{
			curr = "(nil)";
		}

		printf("%s", curr);
		if ((i != (int) n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	putchar('\n');
}
