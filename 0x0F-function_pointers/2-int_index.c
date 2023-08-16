#include "function_pointers.h"
/**
 * int_index - indexing
 * @array: array
 * @size: size of array
 * @cmp: function pointer to compare
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
