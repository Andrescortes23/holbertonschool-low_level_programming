#include "holberton.h"
/**
 *times_table - to rpint the tables
 *tables
 *Return: 0
 */
void times_table(void)
{
	int rig;
	int dwn;
	int rst;

	rig = 0;
	while (rig < 10)
	{
		dwn = 0;
		while (dwn < 10)
		{
			rst = rig * dwn;
			if (rst < 10)
			{
				_putchar (' ');
			}
			_putchar (rst);
			if (rst == 9)
			{
				_putchar ('\n');
			}
			dwn++;
		}
		rig++;
	}
}
