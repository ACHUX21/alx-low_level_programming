#include "main.h"
#include <stdio.h>
/**
 * cap_string - Function
 * @str: String to be capitalized
 * Return: Capitalized string
 *
 */
char *cap_string(char *str)
{
	int j, i;
	char spr[13] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};

	if (str[i] <= 'a' && str[i] <= 'z')
		str[i] -= 32;

	while (str[i])
	{
		for (j = 0; j < 13; j++)
			if (str[i] == spr[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
			}
	i++;
	}
	return (str);
}
