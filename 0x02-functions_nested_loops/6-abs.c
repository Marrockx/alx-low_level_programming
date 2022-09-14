#include <stdio.h>

/**
 * _abs - print absolute value of a number
 * @n: number to print absolute
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
