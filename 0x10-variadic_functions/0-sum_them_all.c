#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - varaddic function sum const int
 * @n: int
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start (ap, n);
	if (n == 0);
	return 0;
	for (i = 0; i < n; i++)
	{
		sum += va_args(ap, int);
	}
	va_end(ap);
	return (sum);
}