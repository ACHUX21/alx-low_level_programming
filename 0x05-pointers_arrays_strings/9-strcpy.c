#include "main.h"
/**
 * _strcpy - Function
 * @dest: Destination
 * @src: Source
 * Return: None
 */

char *_strcpy(char *dest, char *src)
{
	int lenght = 0, i;

	while (*(src + lenght) != '\0')
		lenght++;

	for (i = 0; i < lenght; i++)
	{
		dest[i] = src[i];
	}
dest[lenght] = '\0';
return (dest);
}
