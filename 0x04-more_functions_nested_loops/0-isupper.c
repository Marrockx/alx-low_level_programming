#include "main.h"

/**
 * _isupper - checks if letter is lower
 * @c: letter to be checked
 * Description: check if letter is uppercase
 * and prints 1 if upper, otherwise prints 0
 * Return: 1 if letter is lower, 0 is not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
