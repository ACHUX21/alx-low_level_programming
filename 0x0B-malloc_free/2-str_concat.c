#include "main.h"
/**
* str_concat - a function that concatenates two strings.
* @s1: the string to concatenate
* @s2: the string to concatenate
* Return: the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;

	int i, j;

	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	result = malloc(len1 + len2 + 1);

	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = len1; j < len2 + len1; j++)
		result[j] = s2[j - len1];

	result[len1 + len2] = '\0';

	return (result);
}
