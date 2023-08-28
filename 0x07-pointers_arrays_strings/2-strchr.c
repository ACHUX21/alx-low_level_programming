#include "main.h"
/**
 * _strchr - Function to convert a string to a character
 * @s: String to convert
 * @c: Character to convert
 * Return: Character to convert
 */
char *_strchr(char *s, char c)
{
	if (c == '\0')
		return (s);
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
