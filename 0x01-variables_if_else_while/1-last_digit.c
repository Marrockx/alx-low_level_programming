#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point for c program
*
* Description: Given a random number, using if else if else block
* to check last digit of the random number and print output
* that satisfies condition
*
* Return: 0
*/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
	} else if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastDigit);
	} else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
				n, lastDigit);
	}
	return (0);
}
