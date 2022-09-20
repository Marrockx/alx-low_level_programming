#include "main.h"

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line
 * @s: address of string to be reversed
 *
 * Return: void type
 */

void print_rev(char *s)
{
	int index, counter = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		while (s[counter] != '\0')
		{
			counter++;
		}
		_putchar(s[counter - index - 1]);
	}
	_putchar('\n');
}
