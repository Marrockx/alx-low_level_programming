#include "main.h"

/**
 * main - entry point of program
 *
 * Description: using _isalpha function, and _putchar
 * and runs _isalpha function on given value and then
 * write expected output
 * Return: 0 for success always
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
