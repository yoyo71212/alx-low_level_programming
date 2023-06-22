#include "main.h"
/**
 * _isdigit - Returns 1 if c is a digit and 0 otherwise
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
