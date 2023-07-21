#include"main.h"
/**
 * _isupper - print uppercase
 * @c: character need to be uppercase
 * Return:1 if uppercase or 0 if anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
