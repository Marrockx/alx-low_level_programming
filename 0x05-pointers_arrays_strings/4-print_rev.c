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
	int index = 0;

	while (s[index] != '\0')
	{
		_putchar(s[_strlen(s) - index]);
		index += 1;
	}
	_putchar(s[0]);
	_putchar('\n');
}
