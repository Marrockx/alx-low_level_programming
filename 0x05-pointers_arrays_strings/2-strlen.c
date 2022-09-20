#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: address of string to be counted
 *
 * Return: int type - count of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
