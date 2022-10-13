#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 * Return void type
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);
	i = 0;

	while (i < n)
	{
		str = va_arg(list, char*);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("nil");
		}

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}

		i++;
	}

	va_end(list);
	printf("\n");
}
