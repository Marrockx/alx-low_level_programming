#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* positive_or_negative - Given a number, and print output
* @i: number to be checked
*
* Description: check if random number is positive,
* negative or zero and print output
*
* Return: void
*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%i is positive\n", i);
	} else if (i < 0)
	{
		printf("%i is negative\n", i);
	} else
	{
		printf("%i is zero\n", i);
	}
}
