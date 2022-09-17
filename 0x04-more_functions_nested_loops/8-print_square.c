#include "main.h"

/**
 * print_square - function that prints a square,
 * followed by a new line.
 * @size: the size of the square
 *
 * Description: You can only use _putchar function to print
 * The line should end with a \n
 * If size is 0 or less,
 * the function should print only a new line
 * Use the character # to print the square
 * Return: void
 */

void print_square(int size)
{
	int row = 0, column;

	if (size < 0 || size == 0)
	{
		_putchar('\n');
	}

	while (size > 0 && row < size)
	{
		column = 0;

		while (column < size)
		{
			_putchar('#');
			column += 1;
		}
		row += 1;
		_putchar('\n');
	}

}
