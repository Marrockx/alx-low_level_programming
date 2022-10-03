#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer to an array
 * @n: number of elements to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order
 * as they are stored in the array
 * You are allowed to use printf
 * Return: void type
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
