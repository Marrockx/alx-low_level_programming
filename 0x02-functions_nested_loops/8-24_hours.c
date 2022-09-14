#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: 0 for success
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int day = 24;
	int hour = 60;

	while (hours < day)
	{
		while (minutes < hour)
		{
			_putchar(hours / 10 + '0'); /* hours tens digit */
			_putchar(hours % 10 + '0'); /* hours unit digit */
			_putchar(':');
			_putchar(minutes / 10 + '0'); /* minutes tens digit */
			_putchar(minutes % 10 + '0'); /* minutes unit digit */
			_putchar('\n');
			minutes += 1;
		}
		minutes = 0;
		hours += 1;
	}
}
