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
	int k;
	int l;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		int product = i * j;

	if (product > 9)
	{
	k = product % 10;
	l = (k - product) / 10;
	_putchar(',');
	_putchar(' ');
	_putchar(l + '0');
	_putchar(k + '0');
	}
	else
	{
		if (j != 0)
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
