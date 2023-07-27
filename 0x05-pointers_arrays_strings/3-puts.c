#include "main.h"
/**
 * _puts - put stirn
 * @str : sting
 * Return void 
 */
void _puts(char *str)
{
	if (str != 0)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
}
