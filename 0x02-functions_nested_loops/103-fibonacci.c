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
	long fib1 = 1, fib2 = 1, sum_even = 0;
	int i = 0, fib_sum;

	while (fib2 <= 4000000)
	{
		fib_sum = fib1 + fib2;

		if (fib2 % 2 == 0)
		{
			sum_even += fib2;
		}
		fib1 = fib2;
		fib2 = fib_sum;
		i++;
	}

	printf("%ld\n", sum_even);
	return (0);
}
