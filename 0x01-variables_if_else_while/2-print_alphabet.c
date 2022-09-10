#include <stdio.h>

/**
* main - entry point for c program
*
* Description: Program to print all lowercase alphabet characters
*
* Return: 0
*/
int main(void)
{
	char letter;

	/* initialize starting point of character */
	letter = 'a';

	/* while loop */
	while (letter <= 'z')
	{
		putchar(letter);
		letter = letter + 1;
	}
	putchar('\n');
	return (0);
}
