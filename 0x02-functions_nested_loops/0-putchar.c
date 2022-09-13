#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * printPutChar -  Write a program that prints _putchar,
 * followed by a new line.
 *
 * Return: 0
 */
int printPutChar(void)
{
	int length;

	length = strlen("_putchar");
	write(1, "_putchar", length);
	write(1, "\n", 1);
	return (0);
}
