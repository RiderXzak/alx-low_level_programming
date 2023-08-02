#include"main.h"

/**
 * _memset - fills the n bytes of the memory aerea pointed
 *
 * @s: adress
 * @b:byte
 * @n:sizeof array
 * Return:pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
