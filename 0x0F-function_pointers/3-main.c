#include "3-calc.h"
/**
 * main - Entry point
 *
 * @ac: The number of command-line arguments passed to the program
 * @av: An array of strings containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	int (*op)(int, int);
	int a, b;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(av[1]), b = atoi(av[3]);
	op = get_op_func(av[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	if ((av[2][0] == '/' || av[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(a, b));
	return (0);
}
