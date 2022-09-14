#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void (not set)
 */
void times_table(void)
{
	int i = 0;
	int multiplier = 0;
	int product = 0;

	while (i < 10)
	{
		while (multiplier <= 9)
		{
			product = i * multiplier;
			if (product < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(product / 10 + '0');
			}
			_putchar(product % 10 + '0');
			if (multiplier < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			multiplier++;
		}
		_putchar('\n');
		multiplier = 0;
		i++;
	}
}
