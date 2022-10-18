#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function:
 * c: char, i: integer, f: float, s: char *
 * (if the string is NULL, print (nil) instead
 * any other char should be ignored, see example
 * You are not allowed to use for, goto, ternary operator, else, do ... while
 * You can use a maximum of 2 while loops, 2 if
 * You can declare a maximum of 9 variables
 * You are allowed to use printf
 * Print a new line at the end of your function
 * Return: void type
 */

void print_all(const char * const format, ...)
{
	int i, p = 0, n = 0;
	char c;
	float f;
	char * s;
	va_list list;

 	va_start(list, format);
	while (format[n] != '\0')
	{
		n++;
	}

	while (p < n && format)
 	{
		switch (*format)
		{
			case 'c':
				c = va_arg(list, int);
				printf("%c\n", c);
			case 'i':
				i = va_arg(list, int);
				printf("%i\n", i);
			case 'f':
				f = va_arg(list, double);
				printf("%f\n", f);
			case 's':
				s = va_arg(list, char *);

				if (s)
				{
					printf("%s", s);
				}
 				else
				{
					printf("(nil)");
				}
			if (format && format[p] != '\0')
			{
				printf(", ");
			}
		}

		p++;
	}
	va_end(list);
 	printf("\n");
 }
