#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print of char * type
 * @f: function pointed to, which takes in char * argument and returns void
 * Return: void type
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
