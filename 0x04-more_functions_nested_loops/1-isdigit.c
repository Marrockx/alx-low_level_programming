#include "main.h"

/**
 * _isdigit - checks if argument is a number between 0 to 9
 * @c: value to be checked
 * and prints 1 if a digit, otherwise prints 0
 * Return: 1 if letter is digit, 0 is not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
