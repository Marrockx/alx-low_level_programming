#include "main.h"

/**
 * memset - function fills first n bytes of memory by given buffer
 * @s: memory area of buffer
 * @b: constant byte to be filled in
 * @n: number of n bytes to fill
 * Return: pointer to memory area, s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
