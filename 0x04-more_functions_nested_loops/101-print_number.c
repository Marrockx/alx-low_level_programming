#include "main.h"

/**
 * print_number - prints an integer.
 * @n: number to be printed
 *
 * Description: You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 *
 * Return: void type
 */

void print_number(int n)
{
	unsigned int y;

	y = n;
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		y = n; /* to get the negative value of unsigned */
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(y % 10 + '0');
}
