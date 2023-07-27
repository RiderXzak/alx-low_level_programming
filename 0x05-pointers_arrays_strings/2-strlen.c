#include "main.h"
/**
 * _strlen - lenght
 * @s: character
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	if (s != 0)
	{
		while (*s != '\0')
		{
			length++;
			s++;
		}
	}

	return (length);
}
