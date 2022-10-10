#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of a square matrix of integers
 * @a: pointer to start of 2d matrix array
 * @size: size of array or width of matrix column
 */

void print_diagsums(int *a, int size)
{
	int i, j, pos, ld = 0, rd = 0;

	i = 0;
	while (i < size)
	{
		pos = (i * size + i);
		ld += *(a + pos);
		i++;
	}
	printf("%i, ", ld);

	j = 0;
	while (j < size)
	{
		pos = (j * size) + (size - j - 1);
		rd += *(a + pos);

		j++;
	}
	printf("%i\n", rd);
}
