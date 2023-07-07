#include <stdio.h>
/**
 * main - Entry Point
 *
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
