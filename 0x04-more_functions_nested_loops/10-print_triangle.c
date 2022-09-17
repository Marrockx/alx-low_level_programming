#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Description: You can only use _putchar function to print
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row = 1, column, spacing;

	if (size < 0 || size == 0)
	{
		_putchar('\n');
	}

	while (size > 0 && row <= size)
	{
		column = 1;
		spacing = size - row;

		/* row 1, n - 1 spacing, inverse proportionality */
		/* excludes nth row, up to n - 1;row starts at 1 */
		while (column <= spacing)
		{
			_putchar(32);
			column += 1;
		}

		column = 0;

		/* this replaces space where column != row */
		/* prints the no of # on each row */
		while (column != row)
		{
			_putchar(35);
			column += 1;
		}
		row += 1;
		_putchar('\n');
	}
}
