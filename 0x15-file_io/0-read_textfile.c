#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 *
 * @filename: The name of the file to be read
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print,
 * or 0 if the file can not be opened or read,
 * filename is NULL
 * or if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t bytes;
	char buffer[1024 * 8];

	if (!filename || !letters)
	{
		return (0);
	}

	f = open(filename, O_RDONLY);
	if (f < 0)
	{
		return (0);
	}

	bytes = read(f, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);
	close(f);
	return (bytes);
}
