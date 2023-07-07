#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char **argv)
{
	int res, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	res = 0;
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents - 25 >= 0)
		{
			cents -= 25;
		}
		else if (cents - 10 >= 0)
		{
			cents -= 10;
		}
		else if (cents - 5 >= 0)
		{
			cents -= 5;
		}
		else if (cents - 2 >= 0)
		{
			cents -= 2;
		}
		else
		{
			cents -= 1;
		}

		res += 1;
	}
	printf("%d\n", res);

	return (0);
}
