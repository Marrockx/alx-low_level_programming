#include "main.h"

/**
 * _islower - function prototype
 * @c: character to be checked and output printed
 * Description: checks if a character is lowercase
 *
 * Return: 1 if letter is lower, 0 is not
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		_putchar('1');
	} else
	{
		_putchar('0');
	}
	return (0);
}
