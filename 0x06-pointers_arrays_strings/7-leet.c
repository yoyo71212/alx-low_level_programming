#include "main.h"
#include <ctype.h>
/**
 * leet - Encodes a string into 1337.
 *
 * @s: The string
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *s)
{
	int c, n;

	char *chars = "aAeEoOtTlL";

	char *nums = "4433007711";

	for (c = 0; s[c] != '\0'; c++)
	{
		for (n = 0; n < 10; n++)
		{
			if (chars[n] == s[c])
			{
				*(s + c) = nums[n];
			}
		}
	}

	return (s);
}
