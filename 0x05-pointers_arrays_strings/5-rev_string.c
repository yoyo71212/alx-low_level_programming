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
	char *temp = s;
	char temp2;

	while (*temp != '\0')
	{
		temp++;
	}
	temp--;

	while (s < end)
	{
		temp2 = *s;
		*s = *temp;
		*temp = temp2;
	}
}
