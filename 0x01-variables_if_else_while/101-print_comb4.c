#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: print three digit numbers
 * and no two number may be the same
 *
 * Return: 0 on success
 */
int main(void)
{
	int i, j, k, l;

	i = 0;

	while (i < 1000)
	{
		/* hundreds place */
		j = i / 100;
		/* tens place */
		k = (i / 10) % 10;
		/* units place */
		l = i % 10;
		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
