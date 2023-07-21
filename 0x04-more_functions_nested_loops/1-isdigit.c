#include"main.h"
/**
 * int _isdigit(int c) - print digit
 *@c: digit
 * Return: 1 if c is a digit or 0 for any thing else
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
