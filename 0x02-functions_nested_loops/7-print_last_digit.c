#include "main.h"
/**
 * print_last_digit - prints the last digit
 *@n: last digit to be printed
 *Return: last digit or zero
 */

int print_last_digit(int n)
{
	int L;

	L = n % 10;
	if (L < 0)
	{
		L = L * -1;
	}
	_putchar(L + '0');
	return (L);
}
