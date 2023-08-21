#include "main.h"
/**
 * _strlen - Returns the length of string s
 *
 * @s: The string
 *
 * Return: The length of s
 */
int _strlen(char *s)
{
	int res;

	if (!s)
	{
		return (0);
	}

	res = 0;
	while (*s)
	{
		res++;
		s++;
	}

	return (res);
}

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bytes, length;

	bytes = 0;
	length = _strlen(text_content);

	if (!filename)
	{
		return (-1);
	}

	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
	{
		return (-1);
	}

	if (length)
	{
		bytes = write(f, text_content, length);
	}
	close(f);

	if (bytes == length)
	{
		return (1);
	}

	return (-1);
}
