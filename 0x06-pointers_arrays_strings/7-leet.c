#include "main.h"

/**
 * leet - encodes strings
 * @str: character to encode
 * Return: pointer to encoded string
 */

char *leet(char *str)
{
	int j = 0;
	char ltrs[] = { 'A', 'E', 'O', 'T', 'L' };
	char codes[] = { 4, 3, 0, 7, 1 };
	char *res = str;

	while (*str)
	{
		for (j = 0; j < 5; j++)
		{
			if (*str == ltrs[j] || *str == ltrs[j] + 32)
			{
				*str = codes[j] + '0';
			}
		}

		str++;
	}

	return (res);
}
