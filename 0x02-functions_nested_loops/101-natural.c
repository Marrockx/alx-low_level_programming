#include <stdio.h>

/**
 * main - entry point
 * Description: prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 if successful
 */

int main(void)
{
	int num_entries = 0, sum = 0;

	while (num_entries < 1024)
	{
		if (num_entries % 3 == 0 || num_entries % 5 == 0)
		{
			sum += num_entries;
		}
		num_entries++;
	}
	printf("%d\n", sum);
	return (0);
}
