#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters
 *
 * @n: The number of parameters
 * @...: Variable number of arguments
 *
 * Return: The sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int res, i;
	va_list args;

	va_start(args, n);

	res = 0;
	for (i = 0; i < (int) n; i++)
	{
		res += va_arg(args, int);
	}

	va_end(args);

	return (res);
}
