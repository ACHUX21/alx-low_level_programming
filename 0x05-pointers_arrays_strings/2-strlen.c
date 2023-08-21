#include "main.h"
/**
 * _strlen - function to return the length of the string
 *
 * @s: the string
 * Return: int length of the string
 */

int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
