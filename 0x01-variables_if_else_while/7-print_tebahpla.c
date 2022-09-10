#include <stdio.h>

/**
* main - entry point for c program
*
* Description: Program to print all lowercase alphabet
* characters in reverse order
*
* Return: 0
*/
int main(void)
{
	char letter;

	/* initialize starting point of character as last character */
	letter = 'z';

	/* while loop */
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
