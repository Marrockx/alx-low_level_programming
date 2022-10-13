#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: first argument to be added
 * @...: other unamed arguments to be added
 * Return: sum of all arguments given
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int readArg, sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		readArg = va_arg(args, int);

		sum += readArg;
	}

	va_end(args);

	return (sum);
}
