#include "main.h"
#include "stdio.h"

/**
 * _strncat - Concatenate Two Arrays
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to copy
 * Return: The destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, z, k;
	char src1[n];

	for (k = 0; k < n; k++)
	{
		src1[k] = src[k];
	}

	while (dest[i] != '\0')
		i++;

	while (src1[j] != '\0')
		j++;

	for (z = 0; z < j; z++)
	{
		dest[i + z] = src1[z];
	}

	dest[i + j] = '\0';

	return (dest);
}
