#include "main.h"

/**
 * puts_half - prints half of a string,
 * followed by a new line
 * @str: address of string to be printed
 * Return: void type
 */

void puts_half(char *str)
{
	int i, strlen, n_even, n_odd; /* declare variables */

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	strlen = i; /* length of string */
	n_even = strlen / 2;
	n_odd = (strlen - 1) / 2;

	if (strlen % 2 == 0) /* even characters */
	{
		i = n_even;
		while (i < strlen)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = n_odd + 1;
		while (i < strlen)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
