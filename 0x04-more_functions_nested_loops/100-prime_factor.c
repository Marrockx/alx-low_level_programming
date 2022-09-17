#include <stdio.h>

/**
 * main - entry point
 * Description: program that finds and prints
 * the largest prime factor of the number 612852475143,
 * followed by a new line.
 * You are allowed to use the standard library
 *
 * Return: 0
 */

int main(void)
{
	long int i = 2, largestPrime;
	long int num = 612852475143;

	while (num != 1)
	{
		if (num % i == 0) /* if it is a factor */
		{
			num = num / i; /* factors range */
			largestPrime = i;
		}
		i++;
	}
	printf("%ld\n", largestPrime);
	return (0);
}
