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
	int c, h;

	char size = sizeof(s);

	for (i = 0; i < size; i++)
	{
		for (c = 0; c < size / 2; c++)
		{
			h = s[c];
			s[c] = s[i];
			s[i] = h;
		}
	}
}
