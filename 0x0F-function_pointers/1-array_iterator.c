#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter,
 * on each element of an array.
 * @array: int * type, array parameter
 * @size: type size_t, size of the array
 * @action: pointer to the function to be used,
 * takes in int type, abd returns void
 * Return: void type
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));

	}
}
