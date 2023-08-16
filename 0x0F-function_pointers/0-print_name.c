#include "function_pointers.h"
/**
 * print_name - functio that print name name
 * @name: print name
 * @f: dunction ointers
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
