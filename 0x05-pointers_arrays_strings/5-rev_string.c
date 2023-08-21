#include "main.h"
/**
 * rev_string - Function to reverse a string
 *
 * @s: the string
 */

void rev_string(char *s)
{
	int i, length = 0;
    char rev[length + 1];

	while (s[length] != '\0')
		length++;

	for (i = 0; i < length; i++)
	{
		rev[i] = s[length - 1 - i];
	}
	rev[length] = '\0';

	for (i = 0; i < length + 1; i++)
	{
		s[i] = rev[i];
	}
}
