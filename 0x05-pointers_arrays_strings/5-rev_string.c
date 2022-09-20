#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string.
 * @s: address of string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char size = sizeof(s);

	for (i = 0; i < size; i++)
	{
		printf("%c", s[size - i - 1]);
	}
}
