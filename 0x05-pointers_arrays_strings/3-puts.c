#include "main.h"
/**
 * _puts - put stirn
 * @str : sting
 * Return void 
 */
void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			putchar(*str);
			str++;
		}
		putchar('\n');
	}
}
