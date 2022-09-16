#include "main.h"

/**
 * print_diagonal- function that draws a straight line
 * in the terminal.
 * @n:  number of times the character \ should be printed
 *
 * Description: You can only use _putchar function to print
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 * Return: void
 */

void print_diagonal(int n)
{
	int position = 0, spacing;

	while (n > 0 && position < n)
	{
		spacing = 0;
		while (spacing < position)
		{
			_putchar(32);
			spacing++;
		}
		_putchar(92);
		_putchar('\n');
		position++;
	}

	if (n == 0 || n < 0)
		_putchar('\n');
}
