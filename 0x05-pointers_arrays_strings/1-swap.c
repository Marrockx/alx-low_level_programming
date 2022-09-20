#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 * @a: address of first integer
 * @b: aaddress of second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b; /* *a === *b*/
	*b = temp; /* *b == temp == *a */
}
