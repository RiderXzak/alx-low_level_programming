#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * return (void)
 */

void print_alphabet_x10(void)
{
	int j

	for (j = 1; j <= 10; j++)
	{
		print_alphabet(j);
	}
	_putchar('\n');
}
