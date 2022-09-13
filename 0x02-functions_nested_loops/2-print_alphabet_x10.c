#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase
 *
 * Description: prints 10 times, using print_alphabet
 * and _putchar prototypes
 *
 * Return: void - not set
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	i = 0;
	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter += 1;
		}
		_putchar('\n');
		i++;
	}
}
