#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 * Description: using _putchar twice
 *
 * Return: void
 */

void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
