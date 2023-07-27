#include "main.h"
/**
 * swap_int - swap integer
 * @a:int
 * @b:int
 * Return:void
 */

void swap_int(int *a, int *b)
{
	if (a != 0 && b != 0)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}
}
