#include "main.h"
/**
 * print_rev - reverse
 * @s: charc
 * Return:void
 */
void print_rev(char *s)
{
	if (*s != 0)
	{
		--s;
		_putchar(*s);
	}
}
