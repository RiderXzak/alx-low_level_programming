#include "main.h"
/**
 * _strchr - locae str
 * @s: string
 * @c: carac
 * Return: s or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return ('\0');
}
