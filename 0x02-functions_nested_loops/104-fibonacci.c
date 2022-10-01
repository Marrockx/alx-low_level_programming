#include <stdio.h>

/**
 * main - starting point of program
 * Description: program to print sum of even Fibonacci numbers
 * up to a fib value, not exceeding 4,000,000.
 * starting from 1 and 2 followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int fib1 = 1, fib2 = 1, fib_sum;
	int i = 0;

	while (i < 98)
	{
		fib_sum = fib1 + fib2;

		printf("%lu", fib2);
		if (i != 97)
		{
			printf(", ");
		}
		fib1 = fib2;
		fib2 = fib_sum;
		i++;
	}

	printf("\n");
	return (0);
}
