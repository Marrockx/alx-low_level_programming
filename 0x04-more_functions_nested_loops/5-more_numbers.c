#include "main.h"

/**
 * more_numbers - function to print numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, n;

	n = 1;
	while (n < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
		n++;
	}
}
