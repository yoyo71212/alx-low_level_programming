#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 *
 * @dest: The destination
 * @src: The source
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *destTemp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (destTemp);
}
