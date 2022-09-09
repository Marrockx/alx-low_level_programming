#include <stdio.h>

/**
* main - entry point for c program
*
* Description: Program to print base 10 numbers from 0;
*
* Return: 0
*/
int main(void)
{
	int num;

	num = 0;

	/* while loop */
	while (num < 10)
	{
		printf("%d", num);
		num = num + 1;
	}
	putchar('\n');
	return (0);
}
