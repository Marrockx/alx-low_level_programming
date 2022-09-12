#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: program to print two digit combination
 * and not the same digits
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		/* for single or unit digit */
		j = i % 10;
		/* for tens or double digit */
		k = i / 10;
		if (k < j)
		{
			putchar(k + '0'); /* tens comes first */
			putchar(j + '0');

			if (i < 89)
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
