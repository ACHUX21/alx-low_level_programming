#include "main.h"
/**
* strtow - function that splits a string into words.
* @str: the string to split
* Return: returns a pointer to an array of strings (words)
*/
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = _count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));

				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp++ = str[start++];

				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
/**
* _count_words - function that calculates the length of a string
* @str: the string to calculate length of
* Return: the length
*/
int _count_words(char *str)
{
	int len = 0, k = 0;

	for (k = 1; str[k] != '\0'; k++)
	{
	if (str[k - 1] != ' ' && str[k] == ' ')
		len++;
	}
	return (len);
}
