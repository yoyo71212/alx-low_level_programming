#include <stdio.h>
/**
 * isPrime - Given a number it returns 1 if it is prime and 0 otherwise
 *
 * @num: The number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */
int isPrime(int num)
{
        if (num <= 1)
        {
                return (0);
        }
	
        int i;
	
        for (i = 2; i * i < num; i++)
        {
                if (num % i == 0 && i != num)
                {
                        return (0);
                }
	}
	return (1);
}

/**
 * main - Entry point
 *
 * Description: Prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long num = 612852475143;
    	int i, max;

    	for (i = 2; i <= num; i++)
    	{
        	if (num % i == 0 && isPrime(i))
        	{
            	max = i;
            	num /= i;
        	}
    	}

    	printf("%d\n", max);
    	return 0;
}
