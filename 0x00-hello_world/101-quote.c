#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
* main - entry point
*
* Description: Program to write out statement
*
* Return: 1
*/
int main(void)
{
	int length;

	length = strlen("and that piece of art is useful - Dora Korpar,
			2015-10-19\n");
	write(1,
		"and that piece of art is useful - Dora Korpar, 2015-10-19\n",
		length);
	return (1);
}
