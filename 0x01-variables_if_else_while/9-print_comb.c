#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the numbers from 0 to 9 with comma and space separator
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		if (number < 9)
		{
			putchar(44);
			putchar(32);
		}
		number++;
	}
	putchar('\n');
}
