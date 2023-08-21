#include "main.h"
/**
 * _strlen - Returns the length of a given string s
 *
 * @s: The string
 *
 * Return: The length of s
 */
int _strlen(char *s)
{
	int res;

	res = 0;
	while (*s)
	{
		res++;
		s++;
	}

	return (res);
}

/**
 * create_file - Creates a file
 *
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bytes, length;

	bytes = 0;
	length = _strlen(text_content);

	if (!filename)
	{
		return (-1);
	}

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
