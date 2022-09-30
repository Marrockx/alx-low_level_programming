#include <stdio.h>

/**
 * main - starting point of program
 * Description: program to print fibonacci numbers,
 * starting from 1 and 2 followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	long fib1 = 0, fib2 = 1, sum;
	int i = 0;

	while (i < 50)
	{
		sum = fib1 + fib2;
		printf("%ld", fib2);

		if (i < 49)
		{
			printf(", ");
		}
		fib1 = fib2;
		fib2 = sum;
		i++;
	}
	printf("\n");
	return (0);
}
