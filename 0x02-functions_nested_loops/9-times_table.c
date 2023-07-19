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
	int p;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	p = i * j;
	if (p > 9)
	{
	k = p % 10;
	l = (p - k) / 10;
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
		_putchar((p % 10) + '0');
	}
	}
	_putchar('\n');
	}

}
