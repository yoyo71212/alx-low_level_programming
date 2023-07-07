#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 *
 * @s: Pointer to the memory area
 * @b: The constant byte
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < ((int) n); i++)
	{
		s[i] = b;
	}

	return (s);
}
