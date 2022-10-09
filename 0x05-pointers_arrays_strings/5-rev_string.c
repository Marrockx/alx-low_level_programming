#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: address of string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int length = _strlen(s);

	if (length == 1)
	{
		printf("%s", s);
	}

	for (i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");
}
