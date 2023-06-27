#include "main.h"
/**
 * rev_string - Reverses a string
 *
 * @s: The pointer to the first character in the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *end = s;
	char temp;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}
}
