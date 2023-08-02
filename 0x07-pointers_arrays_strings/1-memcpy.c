#include "main.h"
/**
 * _memcpy - cpy memory
 * @dest:ver
 * @src:ver
 * @n:v
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
