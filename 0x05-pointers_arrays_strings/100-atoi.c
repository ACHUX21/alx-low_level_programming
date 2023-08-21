#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: String to convert
 * Return: integer
 */

int _atoi(char *s)
{
int i = 0;
int negative = 0;
unsigned int h;
int check = 0;

while (s[i] != '\0')
{
if (check == 1 && (s[i] < '0' || s[i] > '9'))
{
break;
}

if (s[i] == 32 || s[i] == 9)
{
i++;
continue;
}
if (s[i] == '-')
negative++;
if (s[i] >= '0' && s[i] <= '9')
{
h = h * 10 + s[i] - 48;
check = 1;
}
i++;
}
if (negative % 2 == 0)
{
return (h);
}
else
{
return (-h);
}
}
