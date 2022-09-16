#include <stdio.h>

/**
 * main - entry point
 *
 * Description: check numbers 1 through 100
 * and print "FizzBuzz" if a multiple of both 3 and 5,
 * "Fizz" if only a multiple of 3,
 * "Buzz" if only a multiple of 5
 * Return: 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i > 1)
		{
			putchar(32);
		}
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else  if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			 printf("%d", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
