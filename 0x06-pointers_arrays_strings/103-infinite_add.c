#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1: first number to be added
 * @n2: second number to be added
 * @r: buffer that function will use to store the result
 * @size_r: the buffer size
 * You can assume that you will always get positive
 * numbers, or 0
 * You can assume that there will be only digits in
 * the strings n1 and n2
 * n1 and n2 will never be empty
 * If the result can not be stored in r
 * the function must return 0
 * Return: pointer to result 
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, lenS = 0;
	
	while (*(n1 + len1++))
		;
	while (*(n2 + len2++))
		;
	printf("%d, %d\n", len1, len2);
	return (r);
}
