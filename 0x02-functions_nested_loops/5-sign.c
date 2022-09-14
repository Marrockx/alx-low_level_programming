#include "main.h"

/**
 * print_sign - print output depending on sign
 * @n: number which sign is to be checked
 * Description: prints + if n is greater than 0,
 * - if n is less than 0 and 0 is n is 0
 * Return: 1 if n is greater than 0, 0 if n is zero,
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return(1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return(0);
	}
	else
	{
		_putchar('-');
		return(-1);
	}
}
