#include "main.h"

/**
 * _isalpha - check if character is an alphabet
 * @c: character to be checked
 *
 * Description: either lowercase or uppercase
 *
 * Return: 1 if an alphabet, 0 if not
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c < 123)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
