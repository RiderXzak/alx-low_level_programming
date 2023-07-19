#include "main.h"
/**
 * _abs - transfrom the integer into abslote form
 * @c: Integer need to be transformed
 * Return: absolute value or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs = c * -1;

		return (abs);
	}
	return (c);
}
