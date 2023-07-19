#include "main.h"
/**
 * times_table - Print time table
 *
 * Return:al
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		int product = i * j;

		_putchar((product / 10) + '0');
		_putchar((product % 10) + '0');
	if (j < 9)
	{
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		if(j != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar((product % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
