#include "main.h"
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 *
 * @dest: Pointer to destination memory area
 * @src: Pointer to source memory area
 * @n: Number of bytes to be copied from src to dest
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < ((int) n); i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
