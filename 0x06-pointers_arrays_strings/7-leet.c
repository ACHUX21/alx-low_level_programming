#include "main.h"
/**
 * leet - Function
 * @str: string
 * Return: string
 */
char *leet(char *str)
{
	char alphabet[10] = "aAeEoOtTlL";
	char numbers[10] = "4433007711";
	int len = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = numbers[j];
			}
		}
	}
	return (str);
}
