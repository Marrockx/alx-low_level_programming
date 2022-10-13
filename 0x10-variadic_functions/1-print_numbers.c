#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * Return: void type
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int val, val2;
	va_list list;

	va_start(list, n);
	while (i < n - 1)
	{
		val = va_arg(list, int);

		printf("%i", val);

		if (separator)
		{
			printf("%s", separator);
		}
		i++;
	}

	val2 = va_arg(list, int);

	if (val2)
	{
		printf("%i", val2);
	}
	printf("\n");
	va_end(list);
}
