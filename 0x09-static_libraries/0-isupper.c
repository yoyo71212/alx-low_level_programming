#include "main.h"
/**
 * _isupper - Returns 1 if c is uppercase and 0 otherwise
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
