#include "main.h"
/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: The maximum number of bytes to be copied from src.
 * Return: Pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i	= 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
