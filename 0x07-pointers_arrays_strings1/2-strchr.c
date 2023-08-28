#include "main.h"
#include <stdio.h>

/**
 * _strchr - Function to convert a string to a character
 * @s: String to convert
 * @c: Character to convert
 * Return: Character to convert
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
		if (c == '\0')
			return (s);
	}
	return (NULL);
}
