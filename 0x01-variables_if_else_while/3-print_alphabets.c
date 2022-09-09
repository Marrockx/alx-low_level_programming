#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point for c program
*
* Description: Program to print all lowercase
* and uppercase alphabet characters then new line
*
* Return: 0
*/
int main(void)
{
	char lower;
	char upper;

	/* initialize lowercase character */
	lower = 'a';

	/* while loop */
	while (lower <= 'z')
	{
		putchar(lower);
		lower = lower + 1;
	}
	/* initialize uppercase character */
	upper = 'A';
	while (upper <= 'Z')
	{
		putchar(upper);
		upper = upper + 1;
	}
	putchar('\n');
	return (0);
}
