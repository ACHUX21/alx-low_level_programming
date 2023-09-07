#include "main.h"
/**
* string_nconcat - string concatenation function
* @s1: string to concatenate
* @s2: string to conc
* @n: number of characters to concat
* Return: string concatenation function
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0, len2 = 0;

	int i = 0, j = 0, k = 0;

	char *str;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (len1 > n)
		len1 = n;
	if (len2 > n)
		len2 = n;

	str = malloc(sizeof(char) * (len1 + len2 + 1));

		if (str == NULL)
			return (NULL);

	for  (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	for (j = i, k = 0; j < len2 + len1; j++, k++)
	{
		str[j] = s2[k];
	}
	str[j] = '\0';
	return (str);
}
