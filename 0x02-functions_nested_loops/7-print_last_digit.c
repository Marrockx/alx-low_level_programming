#include "main.h"

/**
 * _print_last_digit - prints last digit of number
 *
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
