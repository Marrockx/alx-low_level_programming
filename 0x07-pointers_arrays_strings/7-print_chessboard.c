#include "main.h"

/**
 * print_chessboard - function to print chessboard
 * @a: pointer to chessboard array to print
 * Return: void type
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	
	i = 0;
	while (i < 8)
	{
		j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}

		_putchar('\n');

		i++;
	}
}
