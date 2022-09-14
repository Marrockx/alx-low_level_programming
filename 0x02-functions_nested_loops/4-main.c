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
	_isalpha('H');
	_isalpha('o');
	_isalpha(108);
	_isalpha(';');
	_putchar('\n');
	return (0);
}
