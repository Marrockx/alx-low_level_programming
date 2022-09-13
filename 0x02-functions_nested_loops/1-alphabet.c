#include "main.h"

/**
 * print_alphabet - print lowercase alphabet characters
 *
 * Description: using _putchar twice
 *
 * Return: (void) No return type
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter = letter + 1;
	}
	_putchar('\n');
}
