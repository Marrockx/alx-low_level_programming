#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program to print base 10 numbers
 * using  only putchar
 * using putchar only twice,
 * without type char variable
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}
