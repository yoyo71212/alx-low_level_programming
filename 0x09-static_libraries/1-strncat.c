#include "main.h"
/**
 * _strncat - Concatenates two strings
 *
 * @dest: Pointer to first string
 * @src: Pointer to second string
 * @n: Bytes used from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (temp);
}
