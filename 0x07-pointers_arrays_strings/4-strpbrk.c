#include "main.h"

/**
 * _strpbrk - string to locate the first occurrence of bytes in accept
 * @s: string to check
 * @accept: string to check match
 *
 * Return: pointer to byte in s that matches one of in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (&s[i]);
	}
	return (0);
}
