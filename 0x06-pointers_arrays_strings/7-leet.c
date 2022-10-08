#include "main.h"

/**
 * leet - encodes strings
 * @str: character to encode
 * Return: char type
 */

char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '0'; i++)
	{
		while (str[i] == 'A' || str[i] == 'a')
		{
			str[i] = '4';
		}

		while (str[i] == 'E' || str[i] == 'e')
		{
			str[i] = '3';
		}

		while (str[i] == 'O' || str[i] == 'o')
		{
			str[i] = '0';
		}

		while (str[i] == 'T' || str[i] == 't')
		{
			str[i] = '7';
		}

		while (str[i] == 'L' || str[i] == 'l')
		{
			str[i] = '1';
		}
	}

	return (str);
}
