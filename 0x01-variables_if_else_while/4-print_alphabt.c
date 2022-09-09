#include <stdio.h>

/**
* main - entry point for c program
*
* Description: Program to print all lowercase
* alphabet characters except letters, q and e then new line
*
* Return: 0
*/
int main(void)
{
	char lower;

	/* initialize lowercase character */
	lower = 'a';

	/* while loop */
	while (lower <= 'z')
	{
		if ((lower != 'e') && (lower != 'q'))
		{
			putchar(lower);
		}
		lower = lower + 1;
	}
	putchar('\n');
	return (0);
}
