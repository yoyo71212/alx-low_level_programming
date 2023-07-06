#include "main.h"
#include <string.h>
/**
 * palindromeHelper - Checks if string is a palindrome
 *
 * @s: The string
 * @start: The first/left most character to be checked
 * @end: The last/right most character to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int palindromeHelper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (palindromeHelper(s, start + 1, end - 1));
	}
}

/**
 * is_palindrome - Checks if string is a palindrome
 *
 * @s: The string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int c;

	c = strlen(s);
	if (c < 2)
	{
		return (1);
	}

	return (palindromeHelper(s, 0, c - 1));
}
