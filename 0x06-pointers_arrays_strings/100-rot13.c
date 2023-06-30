#include "main.h"
/**
 * rot13 - Encodes a string using the ROT13 algorithm
 *
 * @s: The pointer to the string
 *
 * Return: The pointer to the string after encoding
 */
char *rot13(char *s)
{
	int i, j;

	char *org = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == org[j])
			{
				s[i] = rot[j];
			}
		}
	}

	return (s);
}
