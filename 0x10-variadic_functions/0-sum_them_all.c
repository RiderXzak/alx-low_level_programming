#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - varaddic function sum const int
 * @n: int
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
	return (0);
	while (i--)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
