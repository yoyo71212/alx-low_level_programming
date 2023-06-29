#include "main.h"
/**
 * _strcat - Concatenates two strings
 *
 * @dest: Pointer to first string
 * @src: Pointer to second string
 *
 * Return: The pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (temp);
}
