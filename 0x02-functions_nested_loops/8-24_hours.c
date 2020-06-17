#include "holberton.h"
void jack_bauer(void);
/**
 *jack_bauer - to print minutes
 *jack: minutes
 *Return: obi
 */
void jack_bauer(void)
{
	int hour;
	int mins;
	int day;

	hour = 0;
	while (hour < 24)
	{
		mins = 0;
		while (mins < 60)
		{
			day = hour / 10;
			_putchar('0' + day);
			day = hour % 10;
			_putchar('0' + day);
			_putchar(':');
			day = mins / 10;
			_putchar('0' + day);
			day = mins % 10;
			_putchar('0' + day);

			mins++;
			_putchar('\n');
		}
		hour++;
	}
}
