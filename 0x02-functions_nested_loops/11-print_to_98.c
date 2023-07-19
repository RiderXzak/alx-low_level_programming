#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number
 * Return:AL
 */
void print_to_98(int n)
{
	int f = 98;

	if (n < 98)
	{
		for (n = n; n < f; n++)
		{
		_putchar(n);
		_putchar('\n');
		}
	}
	else if (n > 98)
	{
		for (n = n; n > f; n--)
		{
			_putchar(n);
			_putchar('\n');
		}
	}
	else
	{
		_putchar(n);
		_putchar('\n');
	}
}
