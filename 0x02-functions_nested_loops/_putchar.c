#include <unistd.h>

/**
 * _putchar - write character and print
 *
 * Return: success (1), on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
