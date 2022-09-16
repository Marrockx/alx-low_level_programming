#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9except 2 and 4
 * Description: using _putchar twice
 *
 * Return: void
void print_most_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
