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
	unsigned int i;
	int val;
	va_list list;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		val = va_arg(list, int);

		printf("%d", val);

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
