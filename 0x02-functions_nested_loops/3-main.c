#include "main.h"

/**
 * main - entry point of program
 *
 * Description: using _islower function, and _putchar
 * and runs _islower function on given value and then
 * write expected output
 * Return: 0 for success always
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
