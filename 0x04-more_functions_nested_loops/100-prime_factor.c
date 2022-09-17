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
	int i = 2, j, isPrime;
	long int largestPrime;
	long int num = 612852475143;

	while (i <= num)
	{
		if (num % i == 0) /* if it is a factor */
		{
			isPrime = 1; /* set isPrime to 1, at 2 */
			j = 2; /* prime nos start from 2 */

			while (j <= i / 2) /* i factor to check prime*/
			{
				if (i % j == 0) /* factors that are not prime */
				{
					isPrime = 0; /* set pointer to 0 */
					break;
				}
				j++;
			}
			if (isPrime == 1)
			{
				largestPrime = i;
			}
		}
		i++;
	}
	printf("%ld\n", largestPrime);
	return (0);
}
