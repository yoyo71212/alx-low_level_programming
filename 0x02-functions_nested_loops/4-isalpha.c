#include "main.h"
/**
 * _isalpha - checks if c is a character in the alphabet
 *
 * @c: ASCII value of the character
 *
 * Return: Returns 1 if c is a character in the alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
