#include "main.h"
#include <stdio.h>
/**
 * cap_string - Function
 * @str: String to be capitalized
 * Return: Capitalized string
 *
 */
char *cap_string(char *s)
{
	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -=  32;
	}
	while (s[i])
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == spe[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
