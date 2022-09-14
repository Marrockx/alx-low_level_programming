#include "main.h"

/**
 * print_times_table - prints the times table, starting with 0.
 * up to a given number, n
 * @n: number to print times table of
 *
 * Return: void (not set)
 */
void print_times_table(int n)
{
	int i = 0;
	int multiplier, product;

	while (((n > 0) && (n < 15)) && (i <= n))
	{
		for (multiplier = 0; multiplier <= n; multiplier++)
		{
			product = i * multiplier;
			if (product >= 100)
			{
				_putchar(product / 100 + '0');
				_putchar((product / 10) % 10 + '0');
				_putchar(product % 10 + '0');
			} else if (product >= 10)
			{
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			} else if (multiplier != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			} else
			{
				_putchar(product + '0');
			}
			if (multiplier != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		multiplier = 0;
		i++;
	}
}
