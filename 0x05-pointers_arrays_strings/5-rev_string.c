#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
char reverse = s[0];
int lenght = 0;
int i;

while (s[lenght] != '\0')
lenght++;

for (i = 0; i < lenght; i++)
{
lenght--;
reverse = s[i];
s[i] = s[lenght];
s[lenght] = reverse;
}
}
