#include "main.h"

/**
 * print_line - function that draws a straight line
 * in the terminal.
 * @n: number of times, the character _ should be printed
 *
 * Description: You can only use _putchar function to print
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 *
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
