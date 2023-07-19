#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * return (void)
 */

void print_alphabet_x10(void)
{
	char c;
	char j;

	for (j = 1; j <= 10; j++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}
}
