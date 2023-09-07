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

	int i = 0, k = 0;

	char *str;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (len2 < n)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));

		if (str == NULL)
			return (NULL);

	while (i < len1 + n)
	{
		if (i >= len1)
			str[i] = s2[i - len1];
		else
			str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
