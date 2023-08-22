#include "main.h"
/**
 * main - Entry Point
 *
 * @ac: The number of command line arguments
 * @av: Array of the command line arguments
 *
 * Return: 1 (Success), 0 (Failure)
 */
int main(int ac, char **av)
{
	int src_f, dest_f, permissions;
	ssize_t bytes;
	char buffer[1024 * 8];

	permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	src_f = 0;
	dest_f = 0;
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	src_f = open(av[1], O_RDONLY);
	if (src_f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	dest_f = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (dest_f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	while ((bytes = read(src_f, buffer, 1024)) > 0)
	{
		if (write(dest_f, buffer, bytes) != bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	src_f = close(src_f);
	dest_f = close(dest_f);
	if (src_f)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_f), exit(100);
	if (dest_f)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_f), exit(100);

	return (EXIT_SUCCESS);
}
